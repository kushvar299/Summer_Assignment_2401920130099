class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> hash(26, 0);

        if(s.length() != t.length()) return false;

        for(int i=0; i<s.length(); i++ ) {
            hash[s[i] - 'a']++;
            hash[t[i] - 'a']--;
        }

        return hash == vector<int>(26, 0);
    }
};
