class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        vector<int> temp = nums;
        int j = 0;
        int n = nums.size();
        k = k%n;

        for(int i=n - k; i<temp.size(); i++){
            nums[j] = temp[i];
            cout<< nums[j]<< endl;
            j++;
        }        

        for(int i=0; i<=n - k - 1; i++){
            nums[j] = temp[i];
            j++;
        }       


    }
};