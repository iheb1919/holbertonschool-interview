#!/usr/bin/python3
"""island_perimeter
"""


def island_perimeter(grid):
    """island_perimeter
    """
    s = 0
    n = len(grid)
    m = len(grid[0])
    for i in range(n):
        for j in range(m):
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
