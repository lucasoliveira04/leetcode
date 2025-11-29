class Solution {
    public int findMaxK(int[] nums) {
        int maiorNegativo = nums[0];
		int result = 0;

		for (int i = 0; i < nums.length; i++){
			if (nums[i] < maiorNegativo){
				maiorNegativo = nums[i];
			
				for (int j = 0; j < nums.length; j++){
					if (nums[j] == (maiorNegativo * -1)){
						result = nums[j];
					}
				}
			}
		}

		return result == 0 ? -1 : result;
    }
}