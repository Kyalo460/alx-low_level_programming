#!/usr/bin/python3
"""Gives the perimeter of an island represented
on a grid.
"""


def island_perimeter(grid):
    """grid is a list of lists that contains integers either 0 or 1.
    1 means it's part of an island and 0 the opposite.
    """

    perimeter = 0;
    exists = False
    
    for row in grid:
        for column in row:
            if column == 1:
                if exists == False:
                    exists = True
                    perimeter = 4
                else:
                    perimeter += 2

    return perimeter
