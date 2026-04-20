class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> feqtable(26,0);

        int left = 0;
        int maxlen = 0;

        for(int right=0 ; right<s.size();right++){
            int currrentfeq = 0 ;
            feqtable[s[right]-'A']++;
            for(int i = 0;i <26 ; i++){
                currrentfeq = max(currrentfeq,feqtable[i]);
            }
            while((right-left+1)-currrentfeq > k){
                feqtable[s[left]-'A']--;
                left++;
                currrentfeq = 0;
                for(int i = 0;i <26; i++){
                    currrentfeq = max(currrentfeq,feqtable[i]);
                }

            }

            maxlen = max(maxlen,right-left+1);
        }

        return maxlen;
    }
};