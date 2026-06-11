class Solution {
public:

    string analyse(string &s, int &i) {

        string total = "";
        int num = 0;

        while(i < s.size()) {

            if(isdigit(s[i])) {

                num = num * 10 + (s[i] - '0');
            }

            else if(s[i] == '[') {

                i++;

                string temp = analyse(s, i);

                while(num--) {
                    total += temp;
                }

                num = 0;
            }

            else if(s[i] == ']') {

                return total;
            }

            else {

                total += s[i];
            }

            i++;
        }

        return total;
    }

    string decodeString(string s) {

        int i = 0;

        return analyse(s, i);
    }
};
