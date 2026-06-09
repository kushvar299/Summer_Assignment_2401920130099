class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> index(256,-1);
        int high;
        int low=0;
        int maxi=0;

        for(high=0;high<s.size();high++){
            if(index[s[high]]>=low){
                low=index[s[high]]+1;
            }
        index[s[high]]=high;
        int ans=high-low+1;
        maxi=max(maxi,ans);
        }

        return maxi;
    }
};
