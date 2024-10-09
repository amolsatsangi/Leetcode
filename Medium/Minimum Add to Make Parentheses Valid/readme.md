# Intuition
The problem asks for the minimum number of parentheses needed to be added to make the string valid. A valid string is one where every opening parenthesis has a corresponding closing parenthesis in the correct order. By utilizing a stack, we can efficiently keep track of unmatched parentheses and count how many extra parentheses need to be added.

# Approach
1. We iterate through each character of the string `s`.
2. If the character is an opening parenthesis `(` or `{`, we push it onto the stack.
3. If the character is a closing parenthesis `)` or `}`, we check the top of the stack:
   - If the stack is empty or the top of the stack does not match the closing parenthesis, we increase the count `ans` since this closing parenthesis is unmatched.
   - Otherwise, we pop the top element from the stack as it forms a valid pair with the current closing parenthesis.
4. After the iteration, any remaining unmatched opening parentheses in the stack will also need to be counted and added to the result.
5. Finally, return the sum of `ans` (unmatched closing parentheses) and the size of the stack (unmatched opening parentheses).

# Complexity
- **Time complexity:** O(n)  
  We iterate over the string `s` exactly once, where `n` is the length of the string. Each character is processed in constant time.

- **Space complexity:** O(n)  
  In the worst case, the stack may hold all the opening parentheses, leading to a space complexity of O(n), where `n` is the length of the string.
