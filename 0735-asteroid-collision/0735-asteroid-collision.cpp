
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for (int i = 0; i < asteroids.size(); ++i) {
            if (asteroids[i] > 0) {
                st.push(asteroids[i]);
            } else {
                while (!st.empty() && st.top() > 0 && st.top() < abs(asteroids[i])) {
                    st.pop();
                }
                if (st.empty() || st.top() < 0) {
                    st.push(asteroids[i]);
                } else if (st.top() == -asteroids[i]) {
                    st.pop();
                }
            }
        }
        
        vector<int> result(st.size());
        for (int i = st.size() - 1; i >= 0; --i) {
            result[i] = st.top();
            st.pop();
        }
        return result;
    }
};
