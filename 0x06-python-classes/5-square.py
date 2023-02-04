#!/usr/bin/python3
"""Module with Square class """


class Square:
    """defines a square object """
    def __init__(self, size=0):
        """initializes the size """
        self.__size = size
        if type(size) == int:
            if size < 0:
                raise ValueError("size must be >= 0")
        else:
            raise TypeError("size must be an integer")

    def area(self):
        """returns the current area"""
        return self.__size * self.__size

    @property
    def size(self):
        """gets the current size of the square """
        return self.__size

    @size.setter
    def size(self, value):
        """sets the new size of the square """
        if type(value) == int:
            self.__size = value
        else:
            raise TypeError("size must be integer")

    def my_print(self):
        """prints the square with hash (#) symbol"""
        if self.__size != 0:
            for i in range(self.__size):
                for j in range(self.__size):
                    print("#", end='')
                print()
        else:
            print()
