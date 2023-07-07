class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        map<int, int> mp;
        for(int i=0; i<nums.size(); i++){
            if(mp.find(nums[i]) != mp.end()){
                mp[nums[i]]++;
            }
            else{
                mp[nums[i]] = 1 ;
            }
        }

        int maxVal = INT_MIN;
        int maxKey = INT_MIN;
        for(auto x=mp.begin(); x!=mp.end(); x++){
            if(maxVal < x->second){
                maxKey = x->first;
                maxVal = x->second;
                cout<<maxKey << " " << maxVal<< endl;
            }
        }

        return maxKey;
    }
};