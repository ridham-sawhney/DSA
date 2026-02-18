class Solution {
public:

    vector<vector<int>> Brute(vector<int>& nums){
        set<vector<int>> uniqueTriplets;

        int n = nums.size();

        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k = j+1;k<n;k++){
                    if((nums[i] + nums[j] + nums[k])==0){
                        vector<int> tempTriplet = {nums[i],nums[j],nums[k]};
                        sort(tempTriplet.begin(),tempTriplet.end());
                        uniqueTriplets.insert(tempTriplet);
                    }
                }
            }
        }
    vector<vector<int>> solution(uniqueTriplets.begin(),uniqueTriplets.end());
        return solution;
    }

    // A+B+C=0 => A+B = -C 
    vector<vector<int>> Mathematics(vector<int>& nums){
        set<vector<int>> uniqueTriplets;

        int n = nums.size();

        for(int i=0;i<n;i++){
            set<int> hashset;
            for(int j=i+1;j<n;j++){

                int third = - (nums[i]+nums[j]);
                if(hashset.find(third) != hashset.end()){
                    vector<int> temp = {nums[i],nums[j],third};
                    sort(temp.begin(),temp.end());
                    uniqueTriplets.insert(temp);
                }
                hashset.insert(nums[j]);
            }
        }
    vector<vector<int>> solution(uniqueTriplets.begin(),uniqueTriplets.end());
        return solution;
    }

    vector<vector<int>> twoPointer(vector<int>& nums) {
        
        vector<vector<int>> answer;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        
        for(int i=0;i<n;i++){
            //skip duplicates
            if(i>0 && nums[i] == nums[i-1]) continue;

            int j = i+1;
            int k = n-1;
            while(j<k){
                int sum = nums[i] + nums[j] + nums[k];
                if(sum<0){
                    j++;
                }else if(sum>0){
                    k--;
                }
                else{
                    // triplet found
                    vector<int> triplet = {nums[i],nums[j],nums[k]};
                    answer.push_back(triplet);
                    j++;
                    k--;

                    // there can be same value of incremented j 
                    // or decremented k 
                    // increment untill the value changes
                    // k : decrement untill the value changes
                    while(j<k && nums[j] == nums[j-1]) j++;
                    while(j<k && nums[k] == nums[k+1]) k--;
                }
            }
        }
        return answer;
    }

    vector<vector<int>> threeSum(vector<int>& nums) {
        return twoPointer(nums);
        return Mathematics(nums);
        return Brute(nums);
    }
};
