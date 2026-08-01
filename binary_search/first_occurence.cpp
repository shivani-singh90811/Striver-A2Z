#include<bits/stdc++.h>
using namespace std;

int firstOccurrence(vector<int> &arr, int n, int x)
{
    int low = 0;
    int high = n - 1;
    int first = -1;

    while(low <= high)
    {
        int mid = low + (high - low) / 2;

        if(arr[mid] == x)
        {
            first = mid;
            high = mid - 1;
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

    return first;
}

int main()
{
    vector<int> arr = {2,4,6,8,8,8,11,13};
    cout << firstOccurrence(arr, arr.size(), 8);
}