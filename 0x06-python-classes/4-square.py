#!/usr/bin/python3
"""Module that includes Square class """


class Square:
    """defines a square class"""
    def __init__(self, size=0):
        """initializes the size"""
        self.__size = size
        if type(size) == int:
            if size < 0:
                raise ValueError("size must be >= 0")
        else:
            raise TypeError("size must be an integer")

    def area(self):
        """returns the current area """
        return (self.__size ** 2)

    @property
    def size(self):
        """ gets the size of the square"""
        return self.__size

    @size.setter
    def size(self, value):
        """ Method that sets the new size of the square"""
        if type(value) == int:
                self.__size = value
        else:
            raise TypeError("size must be an integer")
