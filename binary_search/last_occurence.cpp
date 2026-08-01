#include<bits/stdc++.h>
using namespace std;

int lastOccurrence(vector<int> &arr, int n, int x)
{
    int low = 0;
    int high = n - 1;
    int last = -1;

    while(low <= high)
    {
        int mid = low + (high - low) / 2;

        if(arr[mid] == x)
        {
            last = mid;
            low = mid + 1;
        }
        else if(arr[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return last;
}

int main()
{
    vector<int> arr = {2,4,6,8,8,8,11,13};
    cout << lastOccurrence(arr, arr.size(), 8);
}