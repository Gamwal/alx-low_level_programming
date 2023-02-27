#!/usr/bin/python3

def island_perimeter(grid):
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
