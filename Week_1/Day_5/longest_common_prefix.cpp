#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
        string s = "";
        sort(strs.begin(), strs.end());

        string first = strs.front();
        string last = strs.back();


        for (int i = 0; i < min(first.size(), last.size()); i++) {
            if (first[i] == last[i])
                s += first[i];
            else
                break;
        }

        return s;
}

int main(){
    vector<string> s={"dog","racecar","car"};
    cout << longestCommonPrefix(s) << endl;
    return 0;
}