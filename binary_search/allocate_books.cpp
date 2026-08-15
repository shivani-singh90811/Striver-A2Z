#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int>& books, int students, int maxPages) {
    int studentCount = 1;
    int pages = 0;

    for (int i = 0; i < books.size(); i++) {

        if (pages + books[i] <= maxPages) {
            pages += books[i];
        }
        else {
            studentCount++;
            pages = books[i];
        }
    }

    return studentCount <= students;
}

int allocateBooks(vector<int>& books, int students) {

    if (students > books.size())
        return -1;

    int low = *max_element(books.begin(), books.end());
    int high = accumulate(books.begin(), books.end(), 0);

    int answer = -1;

    while (low <= high) {

        int mid = low + (high - low) / 2;

        if (isPossible(books, students, mid)) {
            answer = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    return answer;
}

int main() {

    vector<int> books = {12, 34, 67, 90};
    int students = 2;

    cout << allocateBooks(books, students);

    return 0;
}