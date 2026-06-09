#include <bits/stdc++.h>
using namespace std;

bool checkInclusion(string s1, string s2) {
    int n1 = s1.length(), n2 = s2.length();
        if (n1 > n2) return false;
        vector<int> count(26, 0);
        for (int i = 0; i < n1; i++) {
            count[s1[i] - 'a']++; 
            count[s2[i] - 'a']--; 
        }
        if (count == vector<int>(26, 0)) return true;
        for (int i = n1; i < n2; i++) {
            count[s2[i] - 'a']--;     
            count[s2[i - n1] - 'a']++; 
            if (count == vector<int>(26, 0)) return true;
        }

        return false;
}

int main(){
    cout << checkInclusion("ab","eidbaooo") << endl;
    return 0;
}