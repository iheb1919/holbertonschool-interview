#!/usr/bin/python3
"""
Main file for testing
"""


def makeChange(coins, total):
    """determine the fewest number of coins needed to meet a given amount
    """
    if (total <= 0):
        return 0
    coins.sort(reverse=True)
    rest = total
    eter = 0
    for i in coins:
        if(rest > 0 and rest // i >= 1):
            x = rest // i
            rest = rest - (i * x)
            eter = eter + x
    if (rest != 0):
        return -1
    return eter
