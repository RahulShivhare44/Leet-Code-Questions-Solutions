class Solution {
public:

    bool search(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int start = 0;
        int end = nums.size() - 1;

        int mid = start + (end - start) / 2;

    while(start <= end){
        int element = nums[mid];
        // element found, then return index
        if(element == target){ 
            return true; 
        }
        else if(target < element){
            //search in left
            end = mid - 1;
        }
        else if(target > element){
            //search in right
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
         //element not found
         return false;
    }
};