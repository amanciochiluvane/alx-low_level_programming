#!/usr/bin/python3
"""Module that includes Square class"""


class Square:
    """defines a square object"""
    def __init__(self, size=0):
        """initializes the size"""
        self.__size = size
        if type(size) == int:
            if size < 0:
                raise ValueError("size must be >= 0")
        else:
            raise TypeError("size must be an integer")

    def area(self):
        """calculates and returns the current area"""
        return self.__size * self.__size
