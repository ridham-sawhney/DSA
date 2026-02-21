class Solution {
// see if you can find the sum using 
// Sum of Sn  = n (n+1)/2
// Square of Sum Pn = n(n+1)(2n+1)/6

//Sn - Sn' = M - R
//Pn - Pn' = M^2 - R^2

//

public:

    vector<int> usingMath(vector<int> nums){
        long long n = nums.size();
        long long Sn = (n*(n+1))/2;
        long long Pn = (n*(n+1)*(2*n+1))/6;

        long long _Sn=0, _Pn=0;
        for(int i = 0;i<n;i++){
            _Sn += nums[i];
            _Pn +=(long long) nums[i] * nums[i]; 
        }

        long long Sdiff = _Sn - Sn;  // R - M
        long long Pdiff = _Pn - Pn;  //R^2 - M^2

        // sdiff =  Repeating - Missing;
        // pdiff = Repeating^2 - Missing^2 ;
        // pdiff = (Repeating - Missing)(Repeating + Missing);
        // pdiff = Sdiff(Repeating + Missing)

        long long RplusM = Pdiff / Sdiff; // R+M
        long long RminusM = Sdiff;        //R-M
        // a+b=c1
        // a-b=c2
        // a = c1+c2 / 2
        long long repeating = (RplusM + RminusM)/2;
        long long missing = repeating - RminusM;
        vector<int> sol = {repeating,missing};
        return sol;
    }

    vector<int> findMissingRepeatingNumbers(vector<int> nums) {
        return usingMath(nums);
      vector<int> tempvector(nums.size(),-1);
      int missing , duplicate;
      for(int i=0;i<nums.size();i++){
        tempvector[nums[i]-1]++;
      }
    //   for(int i=0;i<nums.size();i++){
    //     cout<<tempvector[i];
    //   }
      for(int i=0;i<nums.size();i++){
        if(tempvector[i]==-1){
            missing = i+1;
        }else if(tempvector[i]==1){
            duplicate = i+1;
        }
      }
      vector<int>sol = {duplicate,missing};
      return sol;
    }
};
