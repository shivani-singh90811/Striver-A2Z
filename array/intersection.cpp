#include<bits/stdc++.h>
using namespace std;

vector<int> findArrayIntersection(vector<int> &A, int n, vector<int> &B, int m) {
    vector<int> ans;
    int vis[n] = {0};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (A[i] == B[j] && vis[i] == 0) {
                ans.push_back(A[i]);
                vis[i] = 1;
                break;

            }
            if(B[j] > A[i]) {
        
            }
        }
    }
    return ans;
}