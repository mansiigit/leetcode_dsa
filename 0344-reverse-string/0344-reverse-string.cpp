class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char>a;
        int i=0;
        int j=s.size()-1;
        while(i<j){
            int temp=s[j];
            s[j]=s[i];
            s[i]=temp;
        
        i++;
        j--;
        }
        
    }
};