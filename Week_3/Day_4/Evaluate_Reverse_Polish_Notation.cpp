#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for (const string& token : tokens) {
            if (token == "+" || token == "-" || token == "*" || token == "/") {
                int b = st.top(); 
                st.pop();
                int a = st.top(); 
                st.pop();
                if (token == "+") st.push(a + b);
                else if (token == "-") st.push(a - b);
                else if (token == "*") st.push(a * b);
                else if (token == "/") st.push(a / b); 
            } else {
                st.push(stoi(token));
            }
        }
        return st.top();
    }
};

int main() {
    Solution solver;
    vector<string> tokens = {"4", "13", "5", "/", "+"};

    cout << "Input Tokens: ";
    for (const string& token : tokens) {
        cout << token << " ";
    }
    cout << "\n";

    int result = solver.evalRPN(tokens);

    cout << "Evaluation Result: " << result << endl;

    return 0;
}