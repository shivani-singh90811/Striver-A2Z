#include<bits/stdc++.h>
using namespace std;

vector<int> superiorElements(vector<int> &a)
{
vector<int> ans;
int maxi = INT_MIN;

int n = a.size();
for (int i = n-1; i >= 0; i--)
{
    if (a[i]> maxi)
    
    {
        maxi= max(maxi, a[i]);
        ans.push_back(a[i]);
    }
    
}
sort(ans.begin(), ans.end());
return ans;
}
int main(){
    vector<int> a = {22,3,4,5,7};
    superiorElements(a);
    vector<int> result = superiorElements(a);

    for(int x : result){
    cout << x << " ";
}
cout << endl;


}