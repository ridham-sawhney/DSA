class Solution {
public:
    void swap(vector<int>& nums,int i,int j){
        int temp = nums[i];
        nums[i]= nums[j];
        nums[j] = temp;
    }

    //best case o(n^2)
    vector<int> bubbleSort1(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]>nums[j]){
                    swap(nums,i,j);
                }
            }
        }
        
        return nums;
    }

    //best case o(n)
    vector<int> bubbleSort(vector<int>& nums) {
        int n = nums.size();
        for(int i=n-1;i>=0;i--){
            bool didSwap = false;
            for(int j=0;j<i;j++){
                if(nums[j]>nums[j+1]){
                    swap(nums,j,j+1);
                    didSwap = true;
                }
            }
            if(!didSwap){break;}
        }
        
        return nums;
    }
};
