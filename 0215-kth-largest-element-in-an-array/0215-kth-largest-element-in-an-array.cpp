class Solution {
public:
    static bool cmp(int a, int b)
    {
        return a > b;
    }

    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end(), cmp);

        for(int i=0; i<nums.size(); i++){
            cout<< nums[i] << " ";
        }

        return nums[k-1];
    }
};