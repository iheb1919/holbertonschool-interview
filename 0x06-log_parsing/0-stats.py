#!/usr/bin/python3
"""log parsing"""
import sys

status_code = ['200', '301', '400', '401', '403', '404', '405', '500']
number = [0, 0, 0, 0, 0, 0, 0, 0]
file_size = 0
counter = 0
try:
    for line in sys.stdin:
        linesp = line.split(" ")
        if len(linesp) > 2:
            size = linesp[-1]
            scode = linesp[-2]
            if scode in status_code:
                i = status_code.index(scode)
                number[i] += 1
        file_size += int(size)
        counter += 1
        if counter == 10:
            print("File size: {}".format(file_size))
            for i in range(8):
                if number[i] != 0:
                    print("{}: {}".format(status_code[i], number[i]))
            counter = 0
except Exception:
    pass
finally:
    print("File size: {}".format(file_size))
    for i in range(8):
                if number[i] != 0:
                    print("{}: {}".format(status_code[i], number[i]))
