def diagonalDifference(arr):
    sum1 = 0
    sum2 = 0
    for i in range(0, len(arr)):
        sum1 = sum1 + int(arr[i][i])
    c = len(arr) - 1
    for j in range(0, len(arr)):
        sum2 = sum2 + int(arr[j][c])
        c = c - 1
    diff = abs(sum1 - sum2)
    return diff
n = int(input())
arr = []
for i in range(0, n):
    st = (input()).split()
    arr.append(st)
print(diagonalDifference(arr))

   
