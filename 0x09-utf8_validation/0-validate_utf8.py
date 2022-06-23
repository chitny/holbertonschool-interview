#!/usr/bin/python3
"""validUTF8"""


def validUTF8(data):
    """method that determines if a given data set
    represents a valid UTF-8 encoding"""
    num = 0

    m1 = 1 << 7
    m2 = 1 << 6

    for i in data:
        m = 1 << 7
        if num == 0:
            while m & i:
                num += 1
                m = m >> 1
            if num == 0:
                continue
            if num == 1 or num > 4:
                return False
        else:
            if not (i & m1 and not (i & m2)):
                return False
        num -= 1
    return num == 0
