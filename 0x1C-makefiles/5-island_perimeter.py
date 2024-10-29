#!/usr/bin/python3
'''
Task 5 - Island Perimeter
'''


def island_perimeter(grid):
    '''
    Function that returns the perimeter of the island described in grid

    grid (list of lists of integers): one cell is a square with width
                                      side length 1
    '''
    perimeter = 0
    for i in grid:
        for j in i:
            if j == 1:
                perimeter += 2
    perimeter += 2
    return perimeter
