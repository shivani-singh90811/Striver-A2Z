#include<bits/stdc++.h>
using namespace std;

void swapIfGreater(vector<int> &arr1, vector<int> &arr2, int ind1, int ind2)
{
    if(arr1[ind1] > arr2[ind2])
    {
        swap(arr1[ind1], arr2[ind2]);
    }
}

void mergeArray(vector<int> &arr1, vector<int> &arr2)
{
    int n = arr1.size();
    int m = arr2.size();

    int len = n + m;
    int gap = (len / 2) + (len % 2);

    while(gap > 0)
    {
        int left = 0;
        int right = left + gap;

        while(right < len)
        {
            // left in arr1, right in arr2
            if(left < n && right >= n)
            {
                swapIfGreater(arr1, arr2, left, right - n);
            }

            // both pointers in arr2
            else if(left >= n)
            {
                swapIfGreater(arr2, arr2, left - n, right - n);
            }

            // both pointers in arr1
            else
            {
                swapIfGreater(arr1, arr1, left, right);
            }

            left++;
            right++;
        }

        if(gap == 1)
            break;

        gap = (gap / 2) + (gap % 2);
    }
}

int main()
{
    vector<int> arr1 = {1,4,8,10};
    vector<int> arr2 = {2,3,9};

    mergeArray(arr1, arr2);

    for(auto it : arr1)
        cout << it << " ";

    for(auto it : arr2)
        cout << it << " ";

    return 0;
}