#include <bits/stdc++.h>
using namespace std;

class MinStack {
    private:
    stack<pair<int, int>> st;
public:
    MinStack() {
    }
    void push(int val) {
        if (st.empty()) {
            st.push({val, val});
        } else {
           
            int current_min = min(val, st.top().second);
            st.push({val, current_min});
        }
    }

    void pop() {
       if (!st.empty()) {
            st.pop();
        }
    }
    int top() {
      return st.top().first;
    }
    int getMin() {
       return st.top().second;
    }
};

int main() {
    MinStack ms;
    ms.push(-2);
    ms.push(0);
    ms.push(-3);
    cout << "Minimum: " << ms.getMin() << endl;
    ms.pop();
    cout << "Top: " << ms.top() << endl;
    cout << "Minimum: " << ms.getMin() << endl;
    return 0;
}