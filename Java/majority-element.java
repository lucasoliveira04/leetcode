class Solution {
    public int majorityElement(int[] nums) {
        int count = 0;
        int temp = 0;

        for (int num : nums) {
            if (count == 0) {
                temp = num;
            }

            if (temp == num) {
                count++;
            } else {
                count--;
            }
        }

        System.out.println(temp);

        return temp;
    }
}