#!/usr/bin/python3
"""
"""


def canUnlockAll(boxes):
    if not boxes or len(boxes) == 0:
        return False
    l = len(boxes)
    t = 1
    keys = [0]
    for key in keys:
        for n in boxes[key]:
            if n not in keys:
                if n != key and n < l:
                    t += 1
                    print(n)
                    keys.append(n)
    if t == l:
        print(keys)
        return True
    print(keys)
    return False
