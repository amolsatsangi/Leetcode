# Maximum Subarray

**Link to the problem:** [Maximum Subarray](https://leetcode.com/problems/maximum-subarray/description/)

---

## Intuition
To find the contiguous subarray with the largest sum, we need to track the cumulative sum while ensuring we discard any portion that reduces the overall sum. If the sum becomes negative, it is better to start fresh.

---

## Approach
- Use **Kadane's Algorithm**:
  - Traverse the array and maintain a running sum (`sum`).
  - At each step, compare the current sum with the maximum sum (`maxI`) found so far.
  - If the running sum becomes negative, reset it to `0`, as continuing with a negative sum will reduce the total.
- Return the maximum sum found during the traversal.

---

## Complexity
- **Time complexity:** \( O(n) \)  
  The array is traversed once.

- **Space complexity:** \( O(1) \)  
  Only constant space is used for tracking the running sum and the maximum sum.
