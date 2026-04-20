class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        if (n == 0) return 0;
        stack<double> s;
        vector<pair<int,int>> pa(n);

        for(int i=0;i<n;i++){
            pa[i] = {position[i],speed[i]};
        }

        sort(pa.rbegin(),pa.rend());

        for(int i=0;i<n;i++){
            double time = (double)(target - pa[i].first)/pa[i].second;
            if(s.empty() || time > s.top()){
                s.push(time);
            }
            
        }

        return s.size();
    }
};
