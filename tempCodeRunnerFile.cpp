#include <bits/stdc++.h>
using namespace std;

vector<int> sortedArray(vector<int> &arr1, vector<int> &arr2){
    int n1 = arr1.size();
    int n2 = arr2.size();
    int i = 0, j = 0;
    vector<int> unionArr;
    while(i < n1 && j < n2) {
        if(arr1[i] <= arr2[j]) {
           if(unionArr.empty() || unionArr.back() != arr1[i]) {
               unionArr.push_back(arr1[i]);
           }
            i++;
        } else 
        {
             if(unionArr.empty() || unionArr.back() != arr2[j]) {
               unionArr.push_back(arr2[j]);
           }
         j++;

        }
     }
        while(i < n1) {
    if(unionArr.empty() || unionArr.back() != arr1[i])
        unionArr.push_back(arr1[i]);
    i++;
}
while(j < n2) {
    if(unionArr.empty() || unionArr.back() != arr2[j])
        unionArr.push_back(arr2[j]);
    j++;
}
        return unionArr;
    }
int main() {
    int n1, n2;
    cout << "Enter the number of elements in the first array: ";
    cin >> n1;
    vector<int> arr1(n1);
    cout << "Enter the elements of the first array: ";
    for(int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }
    
    cout << "Enter the number of elements in the second array: ";
    cin >> n2;
    vector<int> arr2(n2);
    cout << "Enter the elements of the second array: ";
    for(int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }
    
    vector<int> result = sortedArray(arr1, arr2);
    
    cout << "Union of the two arrays is: ";
    for(int num : result) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}

