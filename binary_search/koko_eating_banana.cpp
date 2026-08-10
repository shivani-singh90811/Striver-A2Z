#include<bits/stdc++.h>
using namespace std;

int findMax(vector<int> &v){
int maxi = INT_MIN;
int n = v.size();
for(int i = 0; i < n; i++){
    maxi = max(maxi, v[i]);
}
return maxi;
}
int CalculateTotalHours(vector<int> &v, int hourly){
    int totalM = 0;
    int n = v.size();
    for(int i = 0; i < n; i++){
        totalM += ceil((double)v[i] / hourly);
    }
    return totalM;
}
int minimumRateToEatBananas(vector<int> &v, int h){
    int low = 1, high = findMax(v);
    while(low <= high){
        int mid = low + (high - low) / 2;
        int totalH = CalculateTotalHours(v, mid);
        if(totalH <= h){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return low;
}
    int main(){
        vector<int> v = {3, 6, 7, 11};
        int h = 8;       
        cout <<  minimumRateToEatBananas(v, h);
        return 0;
    }