#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
    int m=mat.size(),n=mat[0].size(),co=0;
    if(m*n!=r*c)    return mat;
    vector<int> temp(r*c);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            temp[co++]=mat[i][j];
        }
    }
    co=0;
    vector<vector<int>> mat1;
    for(int i=0;i<r;i++){
        vector<int> mat2;
        for(int j=0;j<c;j++){
            mat2.emplace_back(temp[co++]);
        }
        mat1.emplace_back(mat2);
    }
    return mat1;
}

int main(){
    vector<vector<int>> v = {{1,2},{3,4}};
    vector<vector<int>> res = matrixReshape(v,1,4);
    for(auto x:res){
        for(auto y:x){
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}