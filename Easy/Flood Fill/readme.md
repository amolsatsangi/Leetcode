# Flood Fill

## Intuition
The problem can be visualized as coloring a connected region in an image, similar to the "fill" tool in a paint program. Starting from a given pixel, we need to change its color and the color of all adjacent pixels that have the same original color, continuing recursively.

This is a classic graph traversal problem where each pixel is a node connected to its 4 adjacent pixels (up, down, left, right). 

## Approach
I implemented a BFS (Breadth-First Search) approach to solve this problem:

1. Create a visited matrix to keep track of pixels we've already processed
2. Start BFS from the given source pixel (sr, sc)
3. For each pixel, check all 4 directions (up, down, left, right)
4. If an adjacent pixel has the same original color and hasn't been visited:
   - Mark it as visited
   - Change its color to the new color
   - Add it to the queue to process its neighbors later
5. Continue until the queue is empty (all connected pixels have been processed)

BFS ensures that we visit all connected pixels with the same color in a level-by-level manner, which is efficient for this problem.

## Complexity

- Time complexity: **O(m × n)** 
 
- Space complexity: **O(m × n)**
 
