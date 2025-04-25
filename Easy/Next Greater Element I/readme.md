# Next Greater Element I

**Link to the problem:** [Next Greater Element I](https://leetcode.com/problems/next-greater-element-i/description/)

---

## Solution 1

### Intuition
Use a stack to efficiently track the next greater element for each value in `nums2` while iterating from right to left.

### Approach
Iterate through `nums2` in reverse and maintain a stack to keep potential "next greater" candidates. For each element, pop smaller elements from the stack. The next greater element is either the top of the stack or -1 if the stack is empty. Store results in a map for O(1) lookup when processing `nums1`.

### Complexity
- **Time complexity:** O(n + m), where n = nums1.size(), m = nums2.size()
- **Space complexity:** O(m) for the stack and hashmap

---

## Solution 2

### Intuition
A brute-force method where for each element in `nums1`, you search through `nums2` to find the first greater element after its position.

### Approach
For every element in `nums1`, scan through `nums2` to locate it, then continue scanning from that point to find the next greater element. If none is found, return -1.

### Complexity
- **Time complexity:** O(n * m), where n = nums1.size(), m = nums2.size()
- **Space complexity:** O(1) (excluding output vector)
