

#include<bits/stdc++.h>
using namespace std;

vector<int> sortedArray(vector <int> a, vector <int> b){
    int n1 = a.size();
    int n2 = b.size();
    set<int> s;
    for (int i = 0; i < n1; i++) {
        s.insert(a[i]);
    }
    for (int i = 0; i < n2; i++) {
        s.insert(b[i]);
    }
    vector<int> unionArr;
    for(auto it : s) {
        unionArr.push_back(it);
    }
    return unionArr;
}