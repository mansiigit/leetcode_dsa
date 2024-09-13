class Solution {
public:
    bool isPalindrome(string s) {
        vector<char>n;
      for(int i=0;i<s.length();i++){
        char c=tolower(s[i]);
        if(isalnum(c)){
        
            n.push_back(c);

        }
        
      }
      int i=0;
      int j=n.size()-1;
      while(i<j){
        if(n[i]!=n[j]){
            return false;
        }
        i++;
        j--;
      }
      return true;
    }
};