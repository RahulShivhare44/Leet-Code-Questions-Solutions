class Solution {
public:
    vector<int> sortedSquares(vector<int>& v) {
        
        

        vector<int> ans;
        for(int i=0; i<v.size(); i++){
            int k = v[i] * v[i];
            k = k < 0 ? k*-1 : k;
            ans.push_back(k);
        }

        sort(ans.begin(), ans.end());

        return ans;

    }
};