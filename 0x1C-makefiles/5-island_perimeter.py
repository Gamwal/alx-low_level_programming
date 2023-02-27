#!/usr/bin/python3
"""Island Perimeter Function"""


def island_perimeter(grid):
    """returns the perimeter of an island
    grid is a list of list of integers:
        - 0 represents a water zone
        - 1 represents a land zone
        - One cell is a square with side length 1
        - Grid cells are connected horizontally/vertically (not diagonally).
        - Grid is rectangular, width and height don’t exceed 100
    Grid is completely surrounded by water, and there is one island
    The island doesn’t have “lakes” (water inside that isn’t connected
    to the water around the island).
    Args:
        grid (list) : A list of list of integers representing an island
    Returns:
        the perimeter of the island in grid
    """

    nrows = len(grid)
    ncols = len(grid[0])
    perimeter = 0
    for i in range(nrows):
        for j in range(ncols):
            p = 4
            if grid[i][j] == 1:
                if i != 0:
                    if grid[i - 1][j] == 1:
                        p -= 1
                if j != 0:
                    if grid[i][j - 1] == 1:
                        p -= 1
                if (j + 1) != ncols:
                    if grid[i][j + 1] == 1:
                        p -= 1
                if (i + 1) != nrows:
                    if grid[i + 1][j] == 1:
                        p -= 1
                perimeter += p
    return(perimeter)
