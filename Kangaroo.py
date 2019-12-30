#!/bin/python3



# Complete the kangaroo function below.
def kangaroo(x1, v1, x2, v2):
    n = 0
    if((x1>=x2 and v1>v2) or (x2>=x1 and v2>v1)):
        return "NO"
    else:
        while(x1 != x2):
            x1 = x1 + v1
            x2 = x2 + v2
            n = n + 1
            if(n>=10000):
                return "NO"
    return "YES"

st = input().split(" ")
print(kangaroo(int(st[0]), int(st[1]), int(st[2]), int(st[3])))

 
