class Solution {
public:
    void swap(vector<int>& nums,int i,int j){
        int temp = nums[i];
        nums[i]=nums[j];
        nums[j]=temp;
    }
    vector<int> selectionSort(vector<int>& nums) {
       
       for(int i=0;i<nums.size();i++){
         int minIndex = i;
         
         for(int j=i+1;j<nums.size();j++){
            if(nums[j]<nums[minIndex]){
                minIndex = j;
            }
         }
         if(minIndex!=i){
            swap(nums,i,minIndex);
         }

       }
        

        return nums;
    }
};
