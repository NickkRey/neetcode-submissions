class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s==""){return true;}
        if(t==""){return false;}
        int lastIndex=0;
        for(int i=0;i<s.size();i++){
            bool found = false;
            for(int j=lastIndex;j<t.size();j++){
                if(s[i]==t[j]){
                    found=true;
                    lastIndex=j+1;
                    break;
                }
            }
            if(!found){return false;}

        }
        return true;
};
};