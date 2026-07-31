#include<bits/stdc++.h>
using namespace std;

int floorValue(vector<int> &arr, int x)
{
    int low = 0;
    int high = arr.size() - 1;

    int ans = -1;

    while(low <= high)
    {
        int mid = low + (high - low) / 2;

        if(arr[mid] <= x)
        {
            ans = arr[mid];
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return ans;
}

int ceilValue(vector<int> &arr, int x)
{
    int low = 0;
    int high = arr.size() - 1;

    int ans = -1;

    while(low <= high)
    {
        int mid = low + (high - low) / 2;

        if(arr[mid] >= x)
        {
            ans = arr[mid];
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> arr = {3,4,4,7,8,10};
    int x = 5;

    cout << "Floor = " << floorValue(arr, x) << endl;
    cout << "Ceil = " << ceilValue(arr, x) << endl;

    return 0;
}