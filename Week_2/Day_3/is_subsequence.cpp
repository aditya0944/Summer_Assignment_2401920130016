#include <bits/stdc++.h>
using namespace std;

bool isSubsequence(string s, string t) {
    int j=0;
    if(s.size()>t.size()) return false;
    if(s==t) return true;
    for(int i=0;i<t.size();i++){
        if(s[j]==t[i]) j++;

    }
    return j==s.size(); 
}

int main(){
    cout << isSubsequence("abc","ahbgdc") << endl;
    return 0;
}