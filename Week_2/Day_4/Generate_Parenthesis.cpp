class Solution {
public:

    void build(vector<string>& ans, string path, int left, int right, int n) {

        if(path.size() == 2 * n) {
            ans.push_back(path);
            return;
        }
        if(left < n) {
            build(ans, path + "(", left + 1, right, n);
        }
        if(right < left) {
            build(ans, path + ")", left, right + 1, n);
        }
    }

    vector<string> generateParenthesis(int n) {

        vector<string> ans;
        build(ans, "", 0, 0, n);
        return ans;
    }
};
