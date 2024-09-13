# XOR Queries of a Subarray

## Problem Description

Given an array `arr` of integers and a list of queries, where each query is a pair of indices `(left, right)`, you have to compute the XOR of the elements from `arr[left]` to `arr[right]` (inclusive) for each query.

### Constraints

- `1 <= arr.length <= 3 * 10^4`
- `1 <= arr[i] <= 10^9`
- `1 <= queries.length <= 3 * 10^4`
- `0 <= left <= right < arr.length`

## Example

```markdown
Input: arr = [1,3,4,8], queries = [[0,1],[1,2],[0,3],[3,3]]
Output: [2,7,14,8]

Explanation:
- The XOR of elements from index 0 to 1 is 1 XOR 3 = 2.
- The XOR of elements from index 1 to 2 is 3 XOR 4 = 7.
- The XOR of elements from index 0 to 3 is 1 XOR 3 XOR 4 XOR 8 = 14.
- The XOR of elements from index 3 to 3 is 8.
```

```markdown
Example 2:

Input: arr = [4,8,2,10], queries = [[2,3],[1,3],[0,0],[0,3]]
Output: [8,0,4,4]
```
## Approach
XOR Prefix
The key idea is to use a prefix XOR array, where each element at index i stores the XOR of all elements from the beginning of the array up to i. This allows for efficiently computing the XOR of any subarray in constant time.

Create a prefix array, where each element at index i stores all XOR elements from beginning up to i.
prefix[i] = arr[0] ^ arr[1] ^ arr[2} ...... ^ arr[i]

The XOR of elements between indices left and right can be calculated as:
if left == 0 prefixXOR[right]
if left > 0 prefixXOR[right] ^ prefixXOR[left-1]
```text
prefixXOR[right] ^ prefixXOR[left-1] = (arr[0] ^ arr[1]...... arr[left-1]^ arr[left] ^ arr[left +1] ...... arr[right]) ^ (arr[0] ^ arr[1]...... ^ arr[left-1] )
prefixXOR[right] ^ prefixXOR[left-1] = (arr[left] ^ arr[left +1] ...... arr[right])
prefixXOR[right] ^ prefixXOR[left-1] =  XOR from L to R
```
