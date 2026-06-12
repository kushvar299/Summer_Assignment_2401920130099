class Solution {
public:
    int compress(vector<char>& chars) {

        int i = 0;
        int k = 0;

        while(i < chars.size()) {

            char ch = chars[i];
            int cnt = 0;

            while(i < chars.size() && chars[i] == ch) {
                cnt++;
                i++;
            }
            chars[k] = ch;
            k++;
            if(cnt > 1) {

                string s = to_string(cnt);

                for(int j = 0; j < s.size(); j++) {
                    chars[k] = s[j];
                    k++;
                }
            }
        }

        return k;
    }
};
