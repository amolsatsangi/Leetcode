# Intuition
The problem is about checking whether a given string containing parentheses is valid. A string is valid if:
1. Every opening bracket has a corresponding closing bracket.
2. The brackets are closed in the correct order.

By using a stack, we can keep track of the open parentheses as we encounter them, and check for matching closing parentheses.

# Approach
1. Traverse through the string character by character.
2. If an opening parenthesis `(`, `{`, or `[` is encountered, push it onto the stack.
3. If a closing parenthesis `)`, `}`, or `]` is encountered:
   - If the stack is empty or the top of the stack does not match the corresponding opening bracket, return `false`.
   - If the top of the stack matches, pop the top of the stack.
4. After processing all characters, check if the stack is empty:
   - If empty, return `true` (valid parentheses).
   - Otherwise, return `false`.

# Complexity
- Time complexity: O(n)  
  The algorithm traverses the input string once, where `n` is the length of the string.

- Space complexity: O(n)  
  In the worst case, the stack may store all opening brackets, which can be up to `n/2` in the worst-case scenario.
