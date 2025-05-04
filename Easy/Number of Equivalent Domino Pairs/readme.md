# Number of Equivalent Domino Pairs

## Intuition
The key insight is to recognize that two dominoes are equivalent if they have the same values, regardless of their orientation. This means [1,2] is equivalent to [2,1]. To count pairs of equivalent dominoes, we need to standardize how we store each domino and then count how many times each unique domino appears.

## Approach
1. For each domino [a,b], normalize it by ensuring the smaller value comes first: [min(a,b), max(a,b)]
2. Use a map to count occurrences of each normalized domino
3. For each unique domino that appears n times, calculate the number of possible pairs using the formula n*(n-1)/2
4. Sum up all these pair counts to get the final result

## Complexity
- Time complexity: **O(n)** where n is the number of dominoes. We process each domino once and map operations are O(1) on average.
- Space complexity: **O(n)** in the worst case where all dominoes are unique. The map stores at most n entries.

