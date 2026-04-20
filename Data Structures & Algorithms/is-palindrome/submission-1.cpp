// #include <cctype>
class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length()-1;

        while(left<right){
            if(!isalnum(s[right])){
                right--;
            }else if(!isalnum(s[left])){
                left++;
            }else{
                // if(tolower(s[left])==tolower(s[right])){
                //     // cout<< s[left]<<","<<s[right]<<"\n";
                //     left++;
                //     right--;
                //     continue;
                // }else{
                //     return false;
                // }
                if(tolower(s[left])!=tolower(s[right])) return false;
                left++;
                right--;
            }
        }

        return true;


    }
};
