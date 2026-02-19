class Solution {
   public:
    void swap(vector<int>& nums, int i, int j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
    void sortZeroOneTwo(vector<int>& nums) {
        int left = 0;
        int mover = 0;
        int right = nums.size() - 1;
        while(mover<=right){
            switch (nums[mover]) {
                case 0: {
                    swap(nums,left,mover);
                    left++;
                    mover++;
                    break;
                }
                case 1: {
                    mover++;
                    break;
                }
                case 2: {
                    swap(nums,mover ,right);
                    right--;
                    break;
                }
                default: {
                }
            }
        }
        
    }
};
