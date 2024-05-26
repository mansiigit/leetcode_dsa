class Solution {
public:
    string removeKdigits(string num, int k) {
        string ans;
        stack<int>st;
        for(auto dig:num){
            if(k>0){
            while(!st.empty() && st.top()>dig){
                st.pop();
                k--;
                if(k==0)
                    break;
                
            }
            }
            st.push(dig);

        }
        if(k>0){
        while(!st.empty() && k){
            st.pop();
            k--;
        }
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        while(ans.size()>0 && ans.back()=='0'){
            ans.pop_back();
        }
        reverse(ans.begin(),ans.end());
        return ans==""? "0": ans;
        
    }
};