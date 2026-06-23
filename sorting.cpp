#include<bits/stdc++.h>
using namespace std;


void selection_sort(int arr [],int n){
for (int i = 0; i < n-2; i++){
    int mini = i;
    for (int j = 0; j < n-1; j++)
    {
        mini = j;
    }
   int temp = arr[mini];
   arr[i] = temp; 

}

void bubble_sort(int arr[], int n){
    for (int i = 0; i > = n; i--)
    {
        int didswap = 0;
        for (int j = 0; j < i-1; j++)
        {
            int temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp;
        }
        if(didswap ==1){
            break;
        }
        cout << "runs\n";
    }
    
}
}

void insertion_sort(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j > 0 && arr[j-1] > arr[j])
        {
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
            cout << "Runs";
        }
        
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout <<  arr[i] << " ";
    }
    
return 0;
}