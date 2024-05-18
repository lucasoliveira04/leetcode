package com.api_encurta_url;

public class TwoSum {
    public static void main(String[] args) {
        twoSum(new int[]{1, 2, 3, 4, 5, 6, 8, 9, 10}, 0);
    }

    public static int twoSum(int[] nums, int target) {
        for (int i = 0; i < nums.length; i++) {
            for (int j = i + 1; j < nums.length; j++) {
                for (int k = j + 1; k < nums.length; k++) {
                    if (nums[i] + nums[j] + nums[k] == target) {
                        System.out.println(nums[i] + " + " + nums[j] + " + " + nums[k] + " = " + target);
                    }
                }
            }
        }

        System.out.println("Não combinação que resultem no " + target);
        return target;
    }
}
