# LeetCode Problem - Maximum Count of Positive Integer and Negative Integer

**Link to the problem:** [Maximum Count of Positive Integer and Negative Integer](https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/?envType=daily-question&envId=2025-03-12)

## Intuition
The problem requires counting the number of positive and negative integers in a sorted array and returning the maximum of the two. Since the array is sorted, we can efficiently count the negatives and derive the positives.  

## Approach
- Traverse the array and count the negative numbers while skipping zeros.  
- Compute the number of positive numbers based on the array length and the count of negatives and zeros.  
- Return the maximum of the two counts.  

## Complexity
- **Time complexity:** \(O(n)\), where \(n\) is the number of elements in the array, as we iterate through a portion of the array.  
- **Space complexity:** \(O(1)\), since only a few integer variables are used.  
