#!/usr/bin/python3
""" This module contain a function called island_perimeter """


def island_perimeter(grid):
    """ function that returns the perimeter of an insland described
    by a grid wich is a list of list of integers"""

    sum_perimeter = 0
    if isinstance(grid, list):
        for j in range(len(grid)):
            if isinstance(grid[j], list):
                length = len(grid)
                width = len(grid[j])
                if length < 100 and width < 100:
                    for i in range(len(grid[j])):
                        if isinstance(grid[j][i], int) and (
                                (grid[j][i] == 0) or
                                (grid[j][i] == 1)
                                ):
                            if width < 100:
                                if grid[j][i] == 1:
                                    sum_perimeter += 4
                                    # checking top
                                    if grid[j - 1][i] == 1 and j != 0:
                                        sum_perimeter -= 2
                                    # checking left
                                    if grid[j][i - 1] == 1 and i != 0:
                                        sum_perimeter -= 2
        return sum_perimeter
