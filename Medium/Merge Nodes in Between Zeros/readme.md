# Intuition
The problem involves merging nodes between zeros in a linked list. The key observation is that the values between two consecutive zero nodes need to be summed up and replaced by a single node containing the sum. Zeros act as delimiters, and we need to sum the values of nodes between them.

# Approach
1. We iterate through the linked list using a pointer `p` and sum up the values of nodes between two consecutive zeros.
2. When we encounter a zero node after summing the values, we create a new node with the sum and link it to the result list.
3. We use another pointer `q` to keep track of the last node in the result list. The head of the new list is initialized when we find the first sum.
4. We skip the zeros and repeat the process until we reach the end of the list.

# Complexity
- **Time complexity**: O(n), where n is the number of nodes in the list. We traverse each node in the linked list exactly once.
- **Space complexity**: O(1), excluding the space for the new linked list nodes. We only use a constant amount of extra space for pointers and summing.
