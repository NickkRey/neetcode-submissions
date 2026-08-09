class Solution {
public:
    int scoreOfString(string s) {
        int result=0;
        for(int i=0;i<s.size()-1;i++){
            char letter=s[i];char letter2=s[i+1];
            result+=abs( (int)letter - (int)letter2 );
        }
        return result;
    }
};