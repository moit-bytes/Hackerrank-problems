#!/bin/python3

# Complete the countApplesAndOranges function below.
def countApplesAndOranges(s, t, a, b, apples, oranges):
    ap = 0
    ora = 0
    for i in range(0, len(apples)):
        apples[i] = apples[i] + a
    for j in range(0, len(oranges)):
        oranges[j] = oranges[j] + b
    for i in apples:
        if(i>=s and i<=t):
            ap = ap + 1
    for j in oranges:
        if(j>=s and j<=t):
            ora = ora + 1
    value = [ap, ora]
    return value

st1 = input().split(" ")
st2 = input().split(" ")
st3 = input().split(" ")
st4 = input().split(" ")
st5 = input().split(" ")
for i in range(0, len(st4)):
    st4[i] = int(st4[i])
for j in range(0, len(st5)):
    st5[j] = int(st5[j])

value2 = countApplesAndOranges(int(st1[0]),int(st1[1]),int(st2[0]),int(st2[1]),st4,st5)
for i in value2:
    print(i)

        
