class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 0;
        for(int i=0; i<nums.size(); i++){
            if(i < nums.size() - 1){
                if(nums[i] == nums[i+1]){
                    continue;
                }
                else if(nums[i] != nums[i+1]){
                    nums[count] = nums[i];
                    count++;
                }
            }
        }
        nums[count++] = nums[nums.size() - 1];
        return count;
    }
};
