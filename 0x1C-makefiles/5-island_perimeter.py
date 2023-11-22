#!/usr/bin/python3
"""Gives the perimeter of an island represented
on a grid.
"""


def island_perimeter(grid):
    """grid is a list of lists that contains integers either 0 or 1.
    1 means it's part of an island and 0 the opposite.
    """

    perimeter = 0
    exists = False

    for row in range(0, 5):
        for column in range(0, 6):
            if grid[row][column] == 1:
                if row != 0 and column != 0:
                    if grid[row][column] == grid[(row - 1)][column]:
                        if grid[row][column] == grid[row][(column - 1)]:
                            continue

                if exists is False:
                    exists = True
                    perimeter = 4
                else:
                    perimeter += 2

    return perimeter
