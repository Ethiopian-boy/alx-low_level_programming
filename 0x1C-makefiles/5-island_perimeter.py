#!/usr/bin/python3
""" Program that discover the perimeter of an island depends on grid """

def island_perimeter(grid):
    perimeter = 0
    r = len(grid)
    for row in range(r):
        c = len(grid[row])
        for col in range(c):
            if grid[row][col] == 1:
                if (row == 0 or grid[row - 1][col] != 1):
                    perimeter += 1
                if (row == (r - 1) or (row < r -1 and grid[row + 1][col] != 1)):
                    perimeter += 1
                if (col == 0 or (grid[row][col - 1] != 1)):
                    perimeter += 1
                if (col == (c -1) or (col < c - 1 and grid[row][col + 1] != 1)):
                    perimeter += 1
    return perimeter
