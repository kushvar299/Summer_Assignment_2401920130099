class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> result;

        if(p.size()>s.size()) return result;

        vector<int> freq1(26,0);
        vector<int> freq2(26,0);

        for(int i=0;i<p.size();i++){
            freq1[p[i]-'a']++;
            freq2[s[i]-'a']++;
        }

        if(freq1==freq2){
            result.push_back(0);
        }

        int low=0;

        for(int high=p.size();high<s.size();high++){

            freq2[s[high]-'a']++;

            freq2[s[low]-'a']--;

            low++;

            if(freq1==freq2){
                result.push_back(low);
            }
        }

        return result;
    }
};
