#include <bits/stdc++.h>
using namespace std;

void reverseString(vector<char>& s) {
    int n=s.size();
    for(int i=0;i<n/2;i++){
        char temp=s[i];
        s[i]=s[n-i-1];
        s[n-i-1]=temp;
    }
}

int main(){
    vector<char> s={'H','a','n','n','a','h'};
    reverseString(s);
    for(auto x:s){
        cout << x << " ";
    }
    return 0;
}