#!/usr/bin/python3
""" Create a function that returns a perimeter of a grid """
def island_perimeter(grid):
    length = len(grid[0])
    perimeter = 0
    count = 0
    for lists in range(len(grid)):
        for lists_idx in range(length):
            if grid[lists][lists_idx] is 1:
                perimeter += 1
                if lists is not 0 and grid[lists - 1][lists_idx] is 1:
                    count += 1
                if lists_idx is not 0 and grid[lists][lists_idx - 1] is 1:
                    count  += 1
    return (4 * perimeter) - (2 * count)
