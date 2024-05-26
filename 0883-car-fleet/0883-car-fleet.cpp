class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        if (n == 0) return 0;
        
        // Pair positions and speeds, and sort by positions in descending order
        vector<pair<int, int>> cars;
        for (int i = 0; i < n; ++i) {
            cars.push_back({position[i], speed[i]});
        }
        sort(cars.begin(), cars.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.first > b.first;
        });
        
        stack<double> st;
        for (const auto& car : cars) {
            double time = static_cast<double>(target - car.first) / car.second;
            if (!st.empty() && time <= st.top()) {
                // If the current car reaches the target at the same time or later,
                // it merges with the fleet in front
                continue;
            }
            st.push(time);
        }
        
        return st.size();
    }
};
