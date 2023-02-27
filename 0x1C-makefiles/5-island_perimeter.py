#!/usr/bin/python3

def island_perimeter(grid):
    shape_of_grid = grid.shape
    perimeter = 0
    for i in range(shape_of_grid[0]):
        for j in range(shape_of_grid[1]):
            p = 4
            if grid[i][j] == 1:
                if i != 0:
                    if grid[i - 1][j] == 1:
                        p -= 1
                if j != 0:
                    if grid[i][j - 1] == 1:
                        np -= 1
                if j != shape_of_gid9[1]
                if grid[i][j + 1] == 1:
                    p -= 1
                if grid[i + 1][j] == 1:
                    p -= 1
                perimeter += 
