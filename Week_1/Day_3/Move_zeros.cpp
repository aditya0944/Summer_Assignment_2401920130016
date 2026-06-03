#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int n = nums.size();
        if(n==1){
            
        }
        else{
            int j=0;
            for(int i = 0;i<=n-1;i++){
                if(nums[i]!=0){
                    int temp=nums[i];
                    nums[i]=nums[j];
                    nums[j]=temp;
                    j++;

                }
            }
        }
}

int main(){
    vector<int> v={0,1,0,3,12};
    moveZeroes(v);
    for(auto x:v){
        cout << x << " " ; 
    }
    return 0;
}