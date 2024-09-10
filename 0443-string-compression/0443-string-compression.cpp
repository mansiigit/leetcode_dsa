#include<bits/stdc++.h>
class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char>ans;
        int i=0;
        while(i<chars.size()){
        char curr=chars[i];
        int count=0;
        while(i<chars.size() && chars[i]==curr){
            count++;
            i++;
        }
        ans.push_back(curr);
        if(count>1){
            string ct=to_string(count);
            for(char c: ct){
            ans.push_back(c);
            }
        }
        }
      chars=ans;
     return ans.size();

    }
};