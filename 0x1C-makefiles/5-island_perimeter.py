#!/usr/bin/python3
"""
Island perimeter
"""

def island_perimeter(grid):
    """ returns the perimeter of the island """
    p = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                p += 4
                if grid[(i - 1)][j] == 1:
                    p -= 1
                if grid[(i + 1)][j] == 1:
                    p -= 1
                if grid[(i)][j - 1] == 1:
                    p -= 1
                if grid[(i)][j + 1] == 1:
                    p -= 1
    return (p)
