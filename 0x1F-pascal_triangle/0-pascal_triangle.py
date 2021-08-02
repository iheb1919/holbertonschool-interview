#!/usr/bin/python3
"""
0. Pascal's Triangle
"""


def pascal_triangle(n):
    r = [[1]]
    sum = []
    x = 0
    y = 0
    if (n <= 0):
        return (sum)
    for k in range(n - 1):
        r[x].insert(0, 0)
        r[x].append(0)
        ra = len(r[x])
        for i in range(ra - 1):
            sum.append(r[x][y] + r[x][y + 1])
            y = y + 1
        r[x].pop(0)
        r[x].pop(-1)
        r.append(sum)
        x = x + 1
        y = 0
        sum = []
    return (r)
