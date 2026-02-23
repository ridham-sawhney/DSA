class Solution {
    void swap(int[] nums,int i , int j){
        int temp = nums[i];
        nums[i]=nums[j];
        nums[j]= temp;
    }
    public int[] selectionSort(int[] nums) {
        for(int i=0;i<nums.length;i++){
            int minIndex = i;
            for(int j=i+1;j<nums.length;j++){
                if(nums[j]<nums[minIndex]){
                    minIndex = j ;
                }
            }
            if(minIndex!=i){
                swap(nums,i,minIndex);
            }
        }
        return nums;
    }
}
