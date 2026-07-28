#include<bits/stdc++.h>
using namespace std;

int countInversions(vector<int>& arr)
{
    int n = arr.size();
    int cnt = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(arr[i] > arr[j])
                cnt++;
        }
    }

    return cnt;
}

int main()
{
    vector<int> arr = {5,3,2,4,1};

    cout << countInversions(arr);

    return 0;
}