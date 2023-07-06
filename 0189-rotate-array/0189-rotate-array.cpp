class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        vector<int> temp = nums;
        int j = 0;
        int n = nums.size();
        k = k % n;

        for(int i= n - k; i < n; i++){
            nums[j] = temp[i];
            j++;
        }        

        for(int i = 0; i <= n - k - 1; i++){
            nums[j] = temp[i];
            j++;
        }       

    }
};