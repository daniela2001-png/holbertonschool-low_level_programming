#!/usr/bin/python3

"""
matriz
"""


def island_perimeter(grid):
    """
    retornar el perimetro de la isla
    """
    perimeter = 0
    for columna in range(len(grid)):
        for fila in range(len(grid[columna])):
            if grid[columna][fila] == 1:
                if columna - 1 < 0 or grid[columna - 1][fila] == 0:
                    perimeter += 1
                # aqui lo valida con el len de la matriz ya que este
                # es elmismo numero de cols
                if columna + 1 >= len(grid) or grid[columna + 1][fila] == 0:
                    perimeter += 1
                if fila + 1 >= len(grid[0]) or grid[columna][fila + 1] == 0:
                    perimeter += 1
                if fila - 1 < 0 or grid[columna][fila - 1] == 0:
                    perimeter += 1
    return perimeter
