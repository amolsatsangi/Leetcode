# Intersection of Two Arrays

**Problem Link:** [Intersection of Two Arrays](https://leetcode.com/problems/intersection-of-two-arrays/description/)

## Intuition
The problem requires finding the unique intersection of two arrays. My first thought was to use a hash map to store the frequencies of elements in one array and then iterate through the other array to identify common elements, ensuring uniqueness.

## Approach
1. Use an unordered map to store the frequency of elements from the first array (`nums1`).
2. Sort the second array (`nums2`) to facilitate unique element tracking.
3. Iterate through `nums2` and check if an element exists in the hash map.
   - If found and it hasn't been added to the result vector yet, add it.
   - Use a variable (`last`) to track the last inserted element and prevent duplicates.
4. Return the result vector containing the unique intersection.

## Complexity
- **Time complexity:**  
 O(NlogN)

- **Space complexity:**  
  O(N)
