 class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int leftProduct = 1;
        int maxLeftSum = INT_MIN;
        int rightProduct = 1;
        int maxRightSum = INT_MIN;
        int size = nums.size();
        for(int i=0;i<size;i++){
            leftProduct*= nums[i];
            maxLeftSum = max(maxLeftSum,leftProduct);
            if(nums[i]==0){
                leftProduct=1;
            }
            rightProduct*= nums[size-i-1];
            maxRightSum = max(maxRightSum,rightProduct);
            if(nums[size-i-1]==0){
                rightProduct=1;
            }
        }
        return max(maxLeftSum,maxRightSum);
    }
};
