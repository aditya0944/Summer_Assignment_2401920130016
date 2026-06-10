#include <bits/stdc++.h>
using namespace std;

int strStr(string haystack, string needle) {
    int n=haystack.size(),m=needle.size();
        for(int i =0;i<=n-m;i++){
            int j;
            for(j =0;j<m;j++){
                if(haystack[i+j] != needle[j]){
                    break;
                }

            }
            if(j==m) return i;
        }
    return -1;
}

int main(){
    cout << strStr("sadbutsad","sad") << endl;
    return 0;
}