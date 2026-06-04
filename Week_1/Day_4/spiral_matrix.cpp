#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int m=matrix.size(),n=matrix[0].size();
    int c=0,top=0,bottom=m-1,left=0,right=n-1;
    vector<int> res;
    while(c<m*n){
        for(int i=left;i<=right&&c<m*n;i++){
            res.emplace_back(matrix[top][i]);
            c++;
        }
        top++;
        for(int i=top;i<=bottom&&c<m*n;i++){
            res.emplace_back(matrix[i][right]);
            c++;
        }
        right--;
        for(int i=right;i>=left&&c<m*n;i--){
            res.emplace_back(matrix[bottom][i]);
            c++;
        }
        bottom--;
        for(int i=bottom;i>=top&&c<m*n;i--){
            res.emplace_back(matrix[i][left]);
            c++;
        }
        left++;
    }
    return res;
    }

int main(){
    vector<vector<int>>v={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    vector<int> res=spiralOrder(v);
    for(auto x:res){
        cout << x << " ";
    }
    return 0;
}