# LeetCode Problem: Intersection of Two Linked Lists

[Problem Link: Intersection of Two Linked Lists](https://leetcode.com/problems/intersection-of-two-linked-lists/)

## Problem Description

Given the heads of two singly linked lists `headA` and `headB`, return the node at which the two lists intersect. If the two linked lists have no intersection at all, return `null`.

The test cases are generated such that there are no cycles anywhere in the entire linked structure.

### Example 1:
```
Input: intersectVal = 8, listA = [4,1,8,4,5], listB = [5,6,1,8,4,5], skipA = 2, skipB = 3 
Output: Intersected at '8' 
Explanation: The nodes with value 8 are the intersection point of the two lists.
```

### Example 2:
```
Input: intersectVal = 2, listA = [1,9,1,2,4], listB = [3,2,4], skipA = 3, skipB = 1 
Output: Intersected at '2'
```
### Example 3:
```
Input: intersectVal = 0, listA = [2,6,4], listB = [1,5], skipA = 3, skipB = 2 
Output: No intersection 
Explanation: The two lists do not intersect, so return null.
```
### Constraints:

- The number of nodes in `listA` is in the range `[0, 3 * 10^4]`.
- The number of nodes in `listB` is in the range `[0, 3 * 10^4]`.
- `1 <= Node.val <= 10^5`
- `0 <= skipA, skipB < listA.length`
- `intersectVal` is `0` if there is no intersection.
- `intersectVal == listA[skipA] == listB[skipB]` if `listA` and `listB` intersect.

