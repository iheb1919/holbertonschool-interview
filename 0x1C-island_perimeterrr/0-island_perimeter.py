#!/usr/bin/pytnoh3
"""island_perimeter
"""


def island_perimeter(grid):
    """island_perimeter
    """
    s = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if (grid[i][j] == 1):
                if (grid[i - 1][j] == 0):
                    s += 1
                if (grid[i + 1][j] == 0):
                    s += 1
                if (grid[i][j + 1] == 0):
                    s += 1
                if (grid[i][j - 1] == 0):
                    s += 1
    return(s)
