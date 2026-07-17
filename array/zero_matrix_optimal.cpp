#include<bits/stdc++.h>
using namespace std;

void zeroMatrix(vector<vector<int>> &matrix){
    int n = matrix.size();
    int m = matrix[0].size();
    int col0 = 1;

    // Step 1: markers lagao
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(matrix[i][j] == 0){
                matrix[i][0] = 0;
                if(j != 0)
                    matrix[0][j] = 0;
                else
                    col0 = 0;
            }
        }
    }

    // Step 2: matrix update karo
    for(int i = 1; i < n; i++){
        for(int j = 1; j < m; j++){
            if(matrix[i][0] == 0 || matrix[0][j] == 0)
                matrix[i][j] = 0;
        }
    }

    // Step 3: pehli row handle karo
    if(matrix[0][0] == 0){
        for(int j = 0; j < m; j++)
            matrix[0][j] = 0;
    }

    // Step 4: pehla column handle karo
    if(col0 == 0){
        for(int i = 0; i < n; i++)
            matrix[i][0] = 0;
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