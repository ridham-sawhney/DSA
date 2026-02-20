class Solution {
    public List<Integer> majorityElementTwo(int[] nums) {
      List<Integer> multiElements = new ArrayList<Integer>();
      int cnt1 = 0;
      int cnt2 = 0;

      int el1 = Integer.MIN_VALUE;
      int el2 = Integer.MIN_VALUE;

      for(int i=0;i<nums.length;i++){
        if(cnt1==0 && nums[i]!=el2)
        {
            cnt1++;
            el1= nums[i];
        }
        else if(cnt2==0 && nums[i]!=el1)
        {
            cnt2++;
            el2= nums[i];
        }
        else if(nums[i]==el1){
            cnt1++;
        }
        else if(nums[i]==el2){
            cnt2++;
        }
        else{
            cnt1--;cnt2--;
        }
      }

      int limit = (Integer)nums.length/3 + 1;
      cnt1=0;
      cnt2=0;
      for(int i = 0;i<nums.length;i++){
        if(nums[i]==el1)cnt1++;
        if(nums[i]==el2)cnt2++;
      }
      if(cnt1>=limit)multiElements.add(el1);
      if(cnt2>=limit)multiElements.add(el2);

      return multiElements;
    }
}
