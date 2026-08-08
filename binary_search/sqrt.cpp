#include<bits/stdc++.h>
using namespace std;

int floorSqrt(int n)
{
    int low = 1;
    int high = n;
    int ans = 0;

    while(low <= high)
    {
        int mid = low + (high - low) / 2;

        if(mid * mid <= n)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return ans;
}

int main()
{
    int n = 28;
    cout << floorSqrt(n);
    return 0;
}