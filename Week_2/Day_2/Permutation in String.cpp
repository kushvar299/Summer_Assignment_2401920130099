class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        if(s1.size()>s2.size()) return false;

        vector<int> freq1(26,0);
        vector<int> freq2(26,0);

        for(int i=0;i<s1.size();i++){
            freq1[s1[i]-'a']++;
            freq2[s2[i]-'a']++;
        }

        if(freq1==freq2) return true;

        int low=0;

        for(int high=s1.size();high<s2.size();high++){

            freq2[s2[high]-'a']++;

            freq2[s2[low]-'a']--;

            low++;

            if(freq1==freq2){
                return true;
            }
        }

        return false;
    }
};
