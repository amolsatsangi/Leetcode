# Decode XORed Array

**Link to the problem:** [Decode XORed Array](https://leetcode.com/problems/decode-xored-array/description/)

## Intuition
The problem can be solved using the properties of XOR. Each element in the encoded array can be decoded using the formula:  
`encoded[i] = arr[i] ^ arr[i+1]`.  
Reversing this formula gives us `arr[i+1] = encoded[i] ^ arr[i]`.  
Starting with the `first` element, we can iteratively decode the array.

## Approach
1. Initialize a result array `arr` with the given `first` element.
2. For each element in the `encoded` array, compute the next element in `arr` using the formula `arr[i+1] = encoded[i] ^ arr[i]`.
3. Append the computed value to the result array.
4. Return the final decoded array.

## Complexity
- **Time complexity:** O(n), where `n` is the size of the encoded array. Each element is processed once.
- **Space complexity:** O(n), as we store the decoded array `arr`.
