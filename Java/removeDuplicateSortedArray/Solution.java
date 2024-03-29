// https://leetcode.com/problems/remove-duplicates-from-sorted-array/

package removeDuplicateSortedArray;

import java.util.Arrays;

class Solution {

	public int removeDuplicates(int[] nums) {
		int i = 0;
		for (int j = 1; j < nums.length; j++) {
			if (nums[j] != nums[i]) {
				i++;
				nums[i] = nums[j];
			}
		}

		return i + 1;
	}

	// time complexity: ?
	// space complexity: O(1)
    public int removeDuplicatesStream(int[] nums) {
		int[] sorted = Arrays.stream(nums).distinct().toArray();
		for (int i = 0; i < nums.length; i++) {
			if (i < sorted.length) {
				nums[i] = sorted[i];
			} else {
				nums[i] = 0;
			}
		}

		return sorted.length;
    }
}
