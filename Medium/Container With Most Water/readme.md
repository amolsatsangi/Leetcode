# Container With Most Water

**Link to the problem:** [Container With Most Water](https://leetcode.com/problems/container-with-most-water/description/?envType=study-plan-v2&envId=top-interview-150)

## Intuition
The problem can be visualized as finding the maximum area that can be formed between two vertical lines (heights) on a coordinate plane. My first thought was to use two pointers at the extreme ends of the array and gradually narrow the search space to find the optimal solution.

## Approach
1. Use two pointers, one starting at the beginning (`i`) and the other at the end (`j`) of the height array.
2. Calculate the current area as the product of the shorter height between `height[i]` and `height[j]` and the distance between the pointers.
3. Update the maximum area if the current area is larger.
4. Move the pointer pointing to the shorter height inward, as this might lead to a taller height and potentially a larger area.
5. Continue until the two pointers meet.

## Complexity
- **Time complexity:** O(n)  
  The array is traversed once, as the two pointers converge towards each other.

- **Space complexity:** O(1)  
  No extra space is used apart from a few variables for calculation.
