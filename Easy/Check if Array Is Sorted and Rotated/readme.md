# Intuition
The problem asks us to check if a given array of integers is sorted and then rotated. The intuition here is that a sorted and rotated array will have at most one point where the current element is greater than the next element, indicating the rotation. After this point, all subsequent elements should be less than or equal to the first element of the array.

# Approach
1. Traverse the array from the start, looking for the point where the current element is greater than the next one.
2. Once we find such a point, we expect the remaining part of the array to be sorted and all elements to be less than or equal to the first element.
3. If any element after this point is greater than the first element or if there is another point where an element is greater than the next one, the array is not sorted and rotated.
4. If no such condition is violated, return `true`. Otherwise, return `false`.

# Complexity
- Time complexity: O(n), where n is the size of the input array `nums`, since we only traverse the array once.

- Space complexity: O(1), since no additional space is used other than a few variables.
