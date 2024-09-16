#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> map = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int ans = 0;
        for (int i = 0; i < s.length(); i++) {
            int first = map[s[i]];
            int second = (i + 1 < s.length()) ? map[s[i + 1]] : 0;

            if (first < second) {
                ans += second - first;
                i++;  // Skip the next character since we've already processed it
            } else {
                ans += first;
            }
        }
        return ans;
    }
};


