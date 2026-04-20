class Solution {
public:
    bool isValid(string s) {
        stack<char> b;

        unordered_map<char,char> seen = {
            {
                ')','('
            },
            {
                ']','['
            },
            {
                '}','{'
            }
        };

        for(const auto& c:s){
            if(seen.count(c)){
                if(!b.empty() && b.top()==seen[c]){
                    b.pop();
                }else{
                    return false;
                }
            }else{
                b.push(c);
            }

        }
        
        return b.empty();

    }
};
