#include<bits/stdc++.h>
using namespace std;

bool search(vector<int> &arr, int n, int k)
{
    int low = 0;
    int high = n - 1;

    while(low <= high)
    {
        int mid = low + (high - low) / 2;

        if(arr[mid] == k)
            return true;

        // Remove duplicates
        if(arr[low] == arr[mid] && arr[mid] == arr[high])
        {
            low++;
            high--;
            continue;
        }

        // Left half sorted
        if(arr[low] <= arr[mid])
        {
            if(arr[low] <= k && k <= arr[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        // Right half sorted
        else
        {
            if(arr[mid] <= k && k <= arr[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }

    return false;
}

int main()
{
    vector<int> arr = {7,8,1,2,3,3,3,4,5,6};

    int target = 3;

    if(search(arr, arr.size(), target))
        cout << "True";
    else
        cout << "False";

    return 0;
}