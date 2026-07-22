#include<bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int>& arr){
    int n = arr.size();
    int cnt1 = 0, cnt2 = 0;
    int c1 = INT_MIN, c2 = INT_MIN;

    for(int i = 0; i < n; i++){
        if(arr[i] == c1) cnt1++;
        else if(arr[i] == c2) cnt2++;
        else if(cnt1 == 0){ c1 = arr[i]; cnt1 = 1; }
        else if(cnt2 == 0){ c2 = arr[i]; cnt2 = 1; }
        else{ cnt1--; cnt2--; }
    }

    cnt1 = 0; cnt2 = 0;
    for(int x : arr){
        if(x == c1) cnt1++;
        if(x == c2) cnt2++;
    }

    vector<int> ans;
    if(cnt1 > n/3) ans.push_back(c1);
    if(cnt2 > n/3) ans.push_back(c2);
    return ans;
}

int main(){
    vector<int> arr = {1, 1, 1, 3, 3, 2, 2, 2};
    vector<int> result = majorityElement(arr);
    for(int x : result){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}