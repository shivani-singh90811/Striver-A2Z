#include<bits/stdc++.h>
using namespace std;

void zeroMatrix(vector<vector<int>> &matrix){
    int n = matrix.size();
    int m = matrix[0].size();

    // Step 1: -1 mark karo
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(matrix[i][j] == 0){
                // row ko -1 karo
                for(int k = 0; k < m; k++){
                    if(matrix[i][k] != 0)
                        matrix[i][k] = -1;
                }
                // column ko -1 karo
                for(int k = 0; k < n; k++){
                    if(matrix[k][j] != 0)
                        matrix[k][j] = -1;
                }
            }
        }
    }

    // Step 2: -1 ko 0 karo
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(matrix[i][j] == -1)
                matrix[i][j] = 0;
        }
    }
}

int main(){
    vector<vector<int>> matrix = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    };

    zeroMatrix(matrix);

    for(int i = 0; i < matrix.size(); i++){
        for(int j = 0; j < matrix[0].size(); j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}