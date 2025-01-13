# Count Items Matching a Rule

**Link to the problem:** [Count Items Matching a Rule](https://leetcode.com/problems/count-items-matching-a-rule/description/)

## Intuition
The problem can be solved by iterating through the `items` list and checking whether the given `ruleKey` matches the corresponding `ruleValue`. This ensures a direct and efficient comparison for each item.

## Approach
1. Use a loop to iterate through each item in the `items` list.
2. Check which attribute (`type`, `color`, or `name`) corresponds to the given `ruleKey`.
3. Compare the value of the attribute to the `ruleValue`.
4. Increment the count for each match found.
5. Return the final count after completing the iteration.

## Complexity
- **Time complexity:** O(n), where `n` is the number of items in the `items` list. Each item is processed once.
- **Space complexity:** O(1), as no additional space is used other than variables for counting and iteration.
