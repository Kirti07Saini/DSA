class Solution {
public:
    int maxDepth(string s) {
        int result=0;
        int openbracket=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                openbracket++;
            }
            else if(s[i]==')'){
                openbracket--;
            }
            result=max(result,openbracket);
        }
        return result;
    }
};