#include<bits/stdc++.h>
using namespace std;

int getSingleElement(vector<int> &arr){
    int xorr = 0;
    for(int i = 0; i < arr.size(); i++){
        xorr ^= arr[i];
    }
    return xorr;
}
int main(){
    vector<int> arr = {4, 1, 2, 1, 2};
    cout << "The single element is: " << getSingleElement(arr) << endl;
    return 0;
}