#!/usr/bin/python3
"""
Minimum Operations
"""


def minOperations(n):
    """
    0. Minimum Operations
    """

    if n <= 1:
        return 0
    num, div, numOp = n, 2, 0

    while num > 1:
        if num % div == 0:
            num = num / div
            numOp = numOp + div
        else:
            div += 1
    return numOp
