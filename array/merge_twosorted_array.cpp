#include<bits/stdc++.h>
using namespace std;

vector<int> mergeArray(vector<int> &arr1, vector<int> &arr2)
{
    int n = arr1.size();
    int m = arr2.size();

    vector<int> ans;

    int left = 0, right = 0;

    while(left < n && right < m)
    {
        if(arr1[left] <= arr2[right])
        {
            ans.push_back(arr1[left]);
            left++;
        }
        else
        {
            ans.push_back(arr2[right]);
            right++;
        }
    }

    while(left < n)
    {
        ans.push_back(arr1[left]);
        left++;
    }

    while(right < m)
    {
        ans.push_back(arr2[right]);
        right++;
    }

    return ans;
}

int main()
{
    vector<int> arr1 = {1,4,8,10};
    vector<int> arr2 = {2,3,9};

    vector<int> ans = mergeArray(arr1, arr2);

    for(auto it : ans)
        cout << it << " ";

    return 0;
}