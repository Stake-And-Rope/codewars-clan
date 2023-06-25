#!/usr/bin/python3

'''
Kara's URL - https://www.codewars.com/kata/515e271a311df0350d00000f/python
Difficulty - 8kyu
Submitter - karastoyanov
'''

def square_sum(numbers):
    return sum(x ** 2 for x in numbers)

square_sum([1,2])
square_sum([0, 3, 4, 5])
square_sum([])
square_sum([-1,-2])
