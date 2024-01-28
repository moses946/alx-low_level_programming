#!/usr/bin/python3
"""Module containing island_perimeter function
"""


def island_perimeter(grid):
    """
    Function that calculates the perimeter of an island
    represented by a grid of 0's and 1's
    """
    perimeter = 0

    for i, row in enumerate(grid):
        for j, val in enumerate(row):
            if val == 1:
                perimeter += 4
                if j - 1 >= 0 and row[j -1]:
                    perimeter -= 2
                if i - 1 >= 0 and grid[i - 1][j]:
                    perimeter -= 2
    
    return perimeter
