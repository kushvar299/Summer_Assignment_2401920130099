class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string doubled = s+s;

        doubled=doubled.substr(1, doubled.size()-2);

        if(doubled.find(s)!= string::npos){
            return true;
        }
        return false;
    }
};
