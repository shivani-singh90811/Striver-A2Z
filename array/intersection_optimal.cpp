#include<bits/stdc++.h>
using namespace std;

vector<int> findArrayIntersection(vector<int> &A, int n, vector<int> &B, int m) 
{
    vector<int> ans;
    int i = 0, j = 0;

    while (i < n && j < m) {
        if (A[i] < B[j]) {
            i++;
        } else if (A[i] > B[j]) {
            j++;
        } else {
            ans.push_back(A[i]);
            i++;
            j++;
        }
    }

    return ans;
}

int main() {
    int n, m;
    cout << "Enter the number of elements in the first array: ";
    cin >> n;
    vector<int> A(n);
    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    cout << "Enter the number of elements in the second array: ";
    cin >> m;
    vector<int> B(m);
    cout << "Enter the elements of the second array: ";
    for (int i = 0; i < m; i++) {
        cin >> B[i];
    }

    vector<int> result = findArrayIntersection(A, n, B, m);

    cout << "Intersection of the two arrays is: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}