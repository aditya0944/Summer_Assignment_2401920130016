#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st; 
        int max_area = 0;
        heights.push_back(0);
        int n = heights.size();
        
        for (int i = 0; i < n; ++i) {
            while (!st.empty() && heights[i] < heights[st.top()]) {
                int h = heights[st.top()];
                st.pop();
                int width = st.empty() ? i : (i - st.top() - 1);
                
                max_area = max(max_area, h * width);
            }
            st.push(i);
        }
        heights.pop_back();
        
        return max_area;
    }
};

int main() {
    Solution solver;
    vector<int> heights = {2, 1, 5, 6, 2, 3};

    cout << "Input Histogram Heights: ";
    for (int h : heights) {
        cout << h << " ";
    }
    cout << "\n";

    int result = solver.largestRectangleArea(heights);

    cout << "Largest Rectangle Area: " << result << endl;

    return 0;
}