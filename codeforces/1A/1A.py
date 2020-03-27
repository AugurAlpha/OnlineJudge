# !/usr/bin/pyhon3
# -*- coding: utf-8 -*-
"""
    A. Theatre Square
    auguralpha
    2020-03-27
"""

from math import ceil


def solution():
    print(ceil(n / a) * ceil(m / a))


if __name__ == '__main__':
    n, m, a = map(int, input().split())
    solution()
