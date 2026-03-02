class Solution {
public:
   
    void swap(vector<int>& nums,int i,int j){
        int temp = nums[i];
        nums[i]= nums[j];
        nums[j]= temp;
    }
    int partition(vector<int>& nums,int low,int high){
        int pivot = nums[low];
        int i = low;
        int j = high;
        while(i<j){
            while(i<=high-1 && nums[i]<=pivot){
                i++;
            }
            while(j>=low+1 && nums[j]>=pivot){
                j--;
            }
            if(i<j){
                swap(nums,i,j);
            }
        }
        swap(nums,low,j);
        return j;
    }
    void quickSortHelper(vector<int>& nums,int low,int high){
        if(low<high){
            int partitionIndex = partition(nums,low,high);
            quickSortHelper(nums,low,partitionIndex);
            quickSortHelper(nums,partitionIndex+1,high);
        }
    }
    vector<int> quickSort(vector<int>& nums) {
        quickSortHelper(nums,0,nums.size()-1);
        return nums;
    }
};
