# Count Subarrays of Length Three With a Condition

**Link to the problem:** [Count Subarrays of Length Three With a Condition](https://leetcode.com/problems/count-subarrays-of-length-three-with-a-condition/description/?envType=daily-question&envId=2025-04-27)

# Intuition
Since the problem asks about subarrays of length exactly three, we can use a sliding window of size three and check the given condition for each such window efficiently.

# Approach
We initialize two pointers, `start` and `end`, representing the first and last elements of a subarray of length three. For each such window, we check if the sum of the first and last elements equals half of the middle element. If the condition holds, we increment a counter. We slide the window by moving both `start` and `end` one step forward until we reach the end of the array.

# Complexity
- Time complexity: **O(n)**, where n is the length of the input array. We traverse the array once.
- Space complexity: **O(1)**, as we use only a few extra variables.
