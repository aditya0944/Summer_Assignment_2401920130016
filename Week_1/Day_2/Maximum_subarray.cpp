#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
    
        int n=nums.size(),sum=0;
        int m=INT_MIN;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum>m) m=sum;
            if(sum<0) sum=0;

        }
        return m;
    }


int main(){
    vector<int> v={5,4,-1,7,8};
    cout << maxSubArray(v) << endl;
    return 0;
}