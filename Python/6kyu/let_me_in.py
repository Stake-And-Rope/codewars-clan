#!/usr/bin/python3

'''
Kata's URL - https://www.codewars.com/kata/6498aa0daff4420024ce2c88
Difficulty - 6kyu
Submitter - karastoyanov, raya, dancho
'''

def get_in_line(arr: list[int]) -> int:
    minutes = 0
    
    """sorting the array"""
    new_arr = []
    for i in range(len(arr)):
        current_value = arr[i]
        if current_value == 1 or current_value == 2:
            new_arr.append(current_value)
    arr = [l for l in arr if l not in [1, 2]]
    new_arr.sort()

    new_arr.extend(arr)
    # print(new_arr)
    
    
    
    index = 0
    while 0 in new_arr:
        if new_arr[index] == 0:
            minutes += 1
            break
        
        if new_arr[index] == 1:
            new_arr.pop(0)
            minutes += 1
            for i in range(int(len(new_arr) / 2)):
                if new_arr[i] == 3 or new_arr[-i-1] == 3 or new_arr[i] == 1:
                    pass
                else:
                    new_arr[index], new_arr[-index-1] = new_arr[-index-1], new_arr[index]
                index += 1
            index = 0
        else:
            minutes += 1
            new_arr.pop(0)
    
    
    return minutes

    
print(get_in_line([8, 0, 2, 1, 4, 2, 12, 3, 2]))

    


