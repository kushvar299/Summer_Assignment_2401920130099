class Solution {
public:
    void reverseString(vector<char>& s) {
        int high=s.size()-1;
        int low=0;
        int temp;
        while (low<=high){
            temp=s[high];
            s[high]=s[low];
            s[low]=temp;
            high--;
            low++;
        }
    }
};
