class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       vector<int> lastpos(256,-1);

       int left = 0;
       int maxlen = 0;

       for(int right = 0;right<s.size() ; right++){
            char current = s[right];

            if(lastpos[current]>=left){ //because everything in hash is -1 which is  always < left (so this is just to chaeck the duplicaiton)
                left = lastpos[current]+1; //why +1 because we need to place left one postion towards right so we need to add 1 
            } 

            lastpos[current] = right;
            maxlen = max(maxlen,right-left+1);
       }

       return maxlen;
    }
};
