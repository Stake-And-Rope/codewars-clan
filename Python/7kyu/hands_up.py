#!/usr/bin/python3

'''
Kata's URL - https://www.codewars.com/kata/56d8f14cba01a83cdb0002a2
Difficulty - 7kyu
Submitter - karastoyanov, raya, dancho
'''

def get_positions(n):
    
    
    p1 = n % 3
    p2 = (n // 3) % 3
    p3 = (n // 9) % 3
    

    return p1, p2, p3

print(get_positions(3))