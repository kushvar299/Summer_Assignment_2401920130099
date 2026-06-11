class Solution {
public:
    string reverseWords(string s) {

        int high=0;
        int low=0;
        s+=" ";

        while(high<s.size()){
            high++;
            if(s[high]==' '){
                reverse(s.begin() + low, s.begin() + high);
                low=high+1;
            }
        }
        s.pop_back();
        return s;       
    }
};
