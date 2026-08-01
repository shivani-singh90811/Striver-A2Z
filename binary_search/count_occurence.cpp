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

int countOccurrences(vector<int> &arr, int n, int x)
{
    int first = firstOccurrence(arr, n, x);

    if(first == -1)
        return 0;

    int last = lastOccurrence(arr, n, x);

    return last - first + 1;
}

int main()
{
    vector<int> arr = {2,4,6,8,8,8,11,13};

    cout << countOccurrences(arr, arr.size(), 8);
}git