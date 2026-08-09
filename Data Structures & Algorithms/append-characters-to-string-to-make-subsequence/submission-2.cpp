class Solution {
public:
    int appendCharacters(string s, string t) {
        int pointerS=0;
        int pointerT=0;
        int diff=0;
        while(pointerS<s.size() && pointerT<t.size()){
            if(s[pointerS]==t[pointerT]){
                pointerT++;
                pointerS++;
            }
            else{
                pointerS++;
            }
        }
        return t.size()-pointerT;
    }
};