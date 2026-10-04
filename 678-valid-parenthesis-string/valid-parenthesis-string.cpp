class Solution {
public:
    bool checkValidString(string s) {
        int open=0;
        int close=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('|| s[i]=='*'){
                open++;
            }
            else{
                open--;
            }
            if(open<0){
            return false;
            }
        }
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]==')'|| s[i]=='*'){
                close++;
            }
            else{
                close--;
            }
            if(close<0){
            return false;
            }
        }
        return true;
    }
};