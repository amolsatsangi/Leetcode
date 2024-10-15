# Intuition
The problem asks us to defang an IP address by replacing every '.' with '[.]'. The intuition is to iterate through the string character by character and replace each '.' with '[.]' while keeping other characters unchanged.

# Approach
1. Create a new string to store the defanged IP address.
2. Iterate through each character of the input IP address string.
3. If the character is a '.', append "[.]" to the new string.
4. If the character is not a '.', append the character as is to the new string.
5. Return the newly constructed defanged IP address.

# Complexity
- Time complexity:  
  The time complexity is **O(n)**, where **n** is the length of the input string. This is because we iterate through each character of the input string exactly once.

- Space complexity:  
  The space complexity is **O(n)**, where **n** is the length of the input string. This is because we create a new string to store the defanged IP address.
