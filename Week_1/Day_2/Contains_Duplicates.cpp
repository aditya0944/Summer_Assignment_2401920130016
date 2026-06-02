#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    unordered_map<int,int> mpp;
    for(int i=0;i<nums.size();i++){
        mpp[nums[i]]++;
        if(mpp[nums[i]]==2)
            return true;
    }
    return false;
}

int main(){
    vector<int> v={1,1,1,3,3,4,3,2,4,2};
    cout << containsDuplicate(v)<<endl;
    return 0;
}