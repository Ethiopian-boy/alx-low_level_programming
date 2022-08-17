#!/usr/bin/python3
""" Program that discover the perimeter of an island depends on grid """

def island_perimeter(grid):
    r, c = len(grid), len(grid[0])
    land, nei = 0, 0
    for row in range(r):
        for col in range(c):
            if grid[row][col] == 1:
                land += 1
                if row < r - 1 and grid[row + 1][col] == 1:
                    nei += 1
                if col < c - 1  and grid[row][col + 1] == 1:
                    nei += 1
    return (4 * land - 2 * nei)
