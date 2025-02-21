# LeetCode Problem - Repeated Substring Pattern

**Link to the problem:** [Repeated Substring Pattern](https://leetcode.com/problems/repeated-substring-pattern/description/?envType=study-plan-v2&envId=programming-skills)

## Intuition
The problem requires checking if a string consists of multiple repetitions of a smaller substring. This suggests an approach based on string partitioning and reconstruction.

## Approach
- Iterate through possible substring lengths up to half of the string length.  
- If the string length is divisible by the current substring length, extract the substring and repeat it enough times to match the original string.  
- If the constructed string matches the original, return `true`. Otherwise, continue checking.  

## Complexity
- **Time complexity:** \(O(n^2)\), as constructing the repeated string for each divisor takes linear time.  
- **Space complexity:** \(O(n)\), since an additional string is used for comparison.  
