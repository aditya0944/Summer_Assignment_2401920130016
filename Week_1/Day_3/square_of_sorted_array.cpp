#include <bits/stdc++.h>
using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
    vector<int>v(nums.size());
    int n = nums.size();
    for(int i = 0;i<n;i++){
        v[i]=(nums[i]*nums[i]);

        }
    sort(v.begin(), v.end());
    return v;

}

int main(){
    vector<int> v ={-4,-1,0,3,10};
    vector<int>res=sortedSquares(v);
    for(auto x:res){
        cout << x << " " ;
    }
    return 0;
}