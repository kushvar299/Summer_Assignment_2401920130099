//by backtracking

class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int j=0;
        for(int i=0;i<haystack.size();i++){
            if(haystack[i]==needle[j]){
                j++;
                if(j==needle.size()){
                    return (i-needle.size()+1);
                }
            }  
            else{
                i=i-j;
                j=0;
            }
        }
        return -1;
    }
};

//by implementing strStr()
//by using string:::find

class Solution {
public:
    int strStr(string haystack, string needle) {

        int index = haystack.find(needle);

        if(index == string::npos){
            return -1;
        }

        return index;
    }
};
