class Solution {
    // see cpp code for mathematical solution
    public int[] findMissingRepeatingNumbers(int[] nums) {
        List<Integer> fillerList = new ArrayList<>(Collections.nCopies(nums.length, 0));

        for(int i=0;i<nums.length;i++){
            int value = fillerList.get(nums[i]-1);
            fillerList.set(nums[i]-1,value+1);
        }
        int missing=0,repeating=0;
        for(int i=0;i<nums.length;i++){
            Integer value = fillerList.get(i);
            // System.out.println(value);
            if(value==0){
                missing = i+1;
            }
            if(value==2){
                repeating = i+1;
            }
            
        }
        return new int[]{repeating, missing};
    }
}
