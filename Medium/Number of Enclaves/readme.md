# Number of Enclaves

## Intuition
The problem asks for land cells that cannot reach the boundary. My intuition was to identify all land cells that CAN reach the boundary, and then count the remaining land cells.

## Approach
1. Create a visited array to keep track of cells that can reach the boundary
2. Perform BFS starting from all land cells (value 1) at the boundary:
   - Traverse all four edges of the grid
   - Add all land cells found on boundaries to a queue
   - For each cell in the queue, mark it as visited and explore adjacent land cells
3. After BFS, count all unvisited land cells in the grid - these are the enclaves

This approach uses the property that any land cell connected to a boundary land cell can reach the boundary. By marking all such cells as visited, the remaining unvisited land cells are the enclaves.

## Complexity
- Time complexity: **O(m × n)**
  - We visit each cell in the grid at most once during BFS
  - m is the number of rows and n is the number of columns in the grid

- Space complexity: **O(m × n)**
  - We use a visited array of the same size as the input grid
  - The queue used for BFS can contain at most m × n elements in the worst case
