class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for(string s : strs) {
            vector<int> hash(26, 0);

            for(char c : s) {
                hash[c - 'a']++;
            }

            string value = "";
            for(int i = 0; i < 26; i++) {
                value += to_string(hash[i]) + '#';
            }

            mp[value].push_back(s);
        }

        vector<vector<string>> ans;
        for(auto& it : mp) {
            ans.push_back(it.second);
        }

        return ans;
    }
};
