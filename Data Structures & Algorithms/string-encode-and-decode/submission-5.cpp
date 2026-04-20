class Solution {
public:

    string encode(vector<string>& strs) {
        string ans;
        for (int i=0;i<strs.size();i++){
            ans += to_string(strs[i].size())+"#"+ strs[i] ;
        }

        return ans;
    }
    

    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0;
        while(i<s.size()){
            int j = s.find("#",i);

            int len = stoi(s.substr(i,j-i));

            i = j+1;

            ans.push_back(s.substr(i,len));

            i+=len;
        }

        return ans;

    }
};
