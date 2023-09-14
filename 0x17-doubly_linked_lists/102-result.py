#!/usr/bin/python3
def ispalind(num):
    result = 1
    for i in range(len(num) // 2):
        if num[i] != num[len(num) - 1 - i]:
            result = 0
            break
    return result
    
def find_max_palind():
    max_palin = []
    product = 0
    for i in range(100, 1000):
        for j in range(100, 1000):
            product = i * j
            if ispalind(str(product)) == 1:
                max_palin.append(product)
    max = max_palin[0]
    for i in range(len(max_palin)):
        if max_palin[i] > max:
            max = max_palin[i]
    return max

result = 
