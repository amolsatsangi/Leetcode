# LeetCode Problem - Robot Bounded in Circle

**Link to the problem:** [Robot Bounded in Circle](https://leetcode.com/problems/robot-bounded-in-circle/description/?envType=study-plan-v2&envId=programming-skills)

## Intuition
The problem requires checking if a robot following a given set of instructions will be bounded within a circle. If the robot returns to the origin or changes direction after one cycle, it must be bounded.  

## Approach
- Track the robot’s position `(x, y)` and its direction `d` (0°, 90°, 180°, 270°).  
- Simulate the movement based on the instructions:  
  - 'G' moves the robot in the current direction.  
  - 'L' and 'R' adjust the direction by -90° and +90°, respectively.  
- Repeat the instructions up to four times to check for cycles.  
- If the robot returns to `(0,0)`, it is bounded; otherwise, it is not.  

## Complexity
- **Time complexity:** \(O(n)\), where \(n\) is the length of the instruction string, since we iterate up to four times.  
- **Space complexity:** \(O(1)\), as only a few variables are used.  
