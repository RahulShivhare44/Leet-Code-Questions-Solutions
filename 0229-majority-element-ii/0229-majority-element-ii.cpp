class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int, int> mp;

        for(int i=0; i<n; i++){
            if(mp.find(nums[i]) == mp.end()){
                mp[nums[i]] = 1;
            }
            else{
                mp[nums[i]]++;
            }
        }

        vector<int> ans;
        for(auto x=mp.begin(); x != mp.end(); x++){
            if(x->second > n/3){
                ans.push_back(x->first);
            }
        }
        return ans;
    }
};