class Solution {
public:
    bool checkString(string s) {
        bool found = false;
        for(char ch : s){
            if(ch == 'b'){
                found = true;
            }else if(ch == 'a' && found){
                return false;
            }
        }
        return true;
    }
};