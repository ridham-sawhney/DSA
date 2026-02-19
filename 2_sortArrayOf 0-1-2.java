class Solution {
    void swap(int[] nums,int i ,int j){
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
    public void sortZeroOneTwo(int[] nums) {
        int left = 0 , mover = 0 , right = nums.length-1;

        while(mover<=right){
            switch(nums[mover]){
                case 0 : {
                    swap(nums,left,mover);
                    left++;
                    mover++;
                    break;
                }
                case 1:{mover++; break;}
                case 2:{
                    swap(nums,mover,right);
                    right--;
                    break;
                }
            }
        }
    }
}
