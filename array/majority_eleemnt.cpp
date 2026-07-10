#include<bits/stdc++.h>
using namespace std;
int findMajorityElement(vector<int> &arr, int n) {
    int cnt = 0;
    int el;

    for (int i = 0; i < n; i++) {
        if (cnt == 0) {
            el = arr[i];
            cnt = 1;
        } else if (arr[i] == el) {
            cnt++;
        } else {
            cnt--;
        }
    }

    // Verify if the element is actually the majority element
    int cnt1 = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == el) {
            cnt1++;
        }
    }

    if (cnt1 > n / 2) {
        return el;
    } else {
        return -1; // No majority element
    }
}

int main() {
    vector<int> arr = {3, 3, 4, 2, 4, 4, 2, 4, 4};
    int n = arr.size();
    int majorityElement = findMajorityElement(arr, n);

    if (majorityElement != -1) {
        cout << "The majority element is: " << majorityElement << endl;
    } else {
        cout << "No majority element found." << endl;
    }

    return 0;
}