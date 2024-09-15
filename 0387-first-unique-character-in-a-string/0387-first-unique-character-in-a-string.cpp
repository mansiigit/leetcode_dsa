class Solution {
public:
    int firstUniqChar(string s) {
        
       for(int i=0;i<s.length();i++){

           if(s.find(s[i], i + 1) == std::string::npos && s.find(s[i]) == i) { //imp
            return i;
           }
       }
       return -1;
    }
       
    
    
};