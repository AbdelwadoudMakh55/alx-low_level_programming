#!/usr/bin/python3
""" This is the island perimeter problem """

def island_perimeter(grid):
    """ This is the solution function """
    ones_count = 0
    land_track = {}
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                ones_count += 1
                land_track[ones_count] = [i, j]
    if ones_count == 0:
        return perimeter
    print(land_track)
    if len(land_track) == 1:
        perimeter = 4
        return perimeter
    for key in land_track.keys():
        neighbors = 0
        if land_track[key][0] - 1 >= 0:
            if grid[land_track[key][0] - 1][land_track[key][1]] == 1:
                neighbors += 1
        if land_track[key][0] + 1 <= len(grid) - 1:
            if grid[land_track[key][0] + 1][land_track[key][1]] == 1:
                neighbors += 1
        if land_track[key][1] - 1 >= 0:
            if grid[land_track[key][0]][land_track[key][1] - 1] == 1:
                neighbors += 1
        if land_track[key][1] + 1 <= len(grid[0]) - 1:
            if grid[land_track[key][0]][land_track[key][1] + 1] == 1:
                neighbors += 1
        perimeter += 4 - neighbors
    return perimeter
