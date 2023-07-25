class Solution {
public:

    void findAll(string current, int o, int c, vector<string> &ans, int n){

        //base case
        if(current.length() == 2*n){
            ans.push_back(current);
            return;
        }

        if(o < n){
           findAll(current+"(", o+1, c, ans, n); 
        }
        if(c < o){
            findAll(current+")", o, c+1, ans, n);
        }

    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        findAll("(", 1, 0, ans, n);
        return ans;
    }
};
