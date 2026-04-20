class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        sort(s1.begin(),s1.end());
        int n = s1.size();
        int left = 0;
        int right = n-1;
        
        while(right<s2.size()){
            string sub = s2.substr(left , n);
            sort(sub.begin(),sub.end());

            if(sub==s1){
                return true;
            }else{
                left++;
                right++;
            }
        }

        return false;
    }
};
