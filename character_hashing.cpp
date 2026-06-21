#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    cin >> s;

    // precompute

    int hash[26] = {0};
    for(int i = 0; i<s.size(); i++){
        // hash[s[i]- 'a'] ++; for small letter
        hash[s[i]]++;
    }
    int q;
    cin >> q;
    while (q--)
    {
        char c;
        cin >>c;

        // fetch

        cout << hash[s[i] - 'a'] << endl;
 }
 return 0;
    
}