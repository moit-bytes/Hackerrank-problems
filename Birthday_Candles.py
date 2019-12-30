def birthdayCakeCandles(ar):
    ar = sorted(ar)
    ar1 = ar[::-1]    
    c1 = 1    
    for i in range(1, len(ar1)):
        if((int(ar1[i])) == (int(ar1[0]))):
            c1 = c1 + 1
    return c1
n = int(input())
ar = (input()).split()
ar2 = []
for j in range(0, len(ar)):
    ar2.append(int(ar[j]))
print(birthdayCakeCandles(ar2))
