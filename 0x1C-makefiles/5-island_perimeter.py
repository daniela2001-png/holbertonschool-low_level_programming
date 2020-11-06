#!/usr/bin/python3
"""
matriz de 3x3
"""


def island_perimeter(grid):
    """
    retornar el perimetro de la isla
    """
    lista = [vector for scalar in grid for vector in scalar if vector == 1]
    suma = 0
    for uno in lista:
        suma += uno
    return ((suma * 2) + 2)
