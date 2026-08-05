#include<bits/stdc++.h>
using namespace std;

int findKRotation(vector<int> &arr)
{
    int low = 0;
    int high = arr.size() - 1;

    int ans = INT_MAX;
    int index = -1;

    while(low <= high)
    {
        // Already sorted
        if(arr[low] <= arr[high])
        {
            if(arr[low] < ans)
            {
                ans = arr[low];
                index = low;
            }
            break;
        }

        int mid = low + (high - low) / 2;

        // Left half sorted
        if(arr[low] <= arr[mid])
        {
            if(arr[low] < ans)
            {
                ans = arr[low];
                index = low;
            }

            low = mid + 1;
        }

        // Right half sorted
        else
        {
            if(arr[mid] < ans)
            {
                ans = arr[mid];
                index = mid;
            }

            high = mid - 1;
        }
    }

    return index;
}

int main()
{
    vector<int> arr = {4,5,6,7,0,1,2};

    cout << findKRotation(arr);

    return 0;
}