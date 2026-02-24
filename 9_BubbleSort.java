class Solution {
    void swap(int[] nums,int i,int j){
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
    public int[] bubbleSort(int[] nums) {
        int n = nums.length;
        for(int i=n-1;i>=0;i--){
            boolean didSwap = false;
            for(int j=0;j<i;j++){
                if(nums[j]>nums[j+1]){
                    swap(nums,j,j+1);
                    didSwap = true;
                }
            }
            if(!didSwap){
                break;
            }
        }
    return nums;
    }
}
