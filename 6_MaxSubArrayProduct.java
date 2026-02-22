class Solution {
    public int max(int a , int b){
        if(a>b)return a;
        return b;
    }
    public int maxProduct(int[] nums) {
        int leftProduct = 1;
        int maxLeftSum = Integer.MIN_VALUE;
        int rightProduct = 1;
        int maxRightSum = Integer.MIN_VALUE;
        int size = nums.length;
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
}
