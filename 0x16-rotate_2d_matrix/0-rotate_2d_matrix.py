#!/usr/bin/python3
"""0. Rotate 2D Matrix

"""


def rotate_2d_matrix(matrix):
    """Given an n x n 2D matrix, rotate it 90 degrees clockwise
    """

    L = len(matrix)
    for i in range(L // 2):
        for j in range(i, L - i - 1):
            temp = matrix[i][j]
            matrix[i][j] = matrix[L - 1 - j][i]
            matrix[L - 1 - j][i] = matrix[L - 1 - i][L - 1 - j]
            matrix[L - 1 - i][L - 1 - j] = matrix[j][L - 1 - i]
            matrix[j][L - 1 - i] = temp
