class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result="";
        int i,j;
        int shortest=strs[0].length();
        if(strs[0]==""){
            return result;
        }
        for(int i=0;i<strs.size()-1;i++){                     //length of shortest string
            if(strs[i].length()>strs[i+1].length()){
                shortest = strs[i+1].length();
            }
        }
        for(i=0;i<shortest;i++){    //letters
            bool allequal=true;
            for(j=0;j<strs.size()-1;j++){           //words
                if(strs[j][i]!=strs[j+1][i]){
                    allequal=false;
                    return result;
                }
            }
            if(allequal){
                result = result + strs[j][i];
            }
        }
        return result;
    }
};
