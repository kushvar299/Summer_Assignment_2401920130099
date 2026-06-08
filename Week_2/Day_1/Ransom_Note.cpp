class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> c_hash(26,0);
        for(int i=0;i<magazine.size();i++){
            c_hash[magazine[i]-'a']++;  
        }
        for(int i=0;i<ransomNote.size();i++){
            if(c_hash[ransomNote[i]-'a']>0){
                c_hash[ransomNote[i]-'a']--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};
