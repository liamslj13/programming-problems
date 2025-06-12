l = int(input())
d = int(input())
x = int(input())

cmin = 10001
cmax = -1

def getSum(i : int) -> int:
    sum = 0
    for digit in str(i):
        sum += int(digit)
    return sum

for i in range(l, d + 1):
    cur = getSum(i)
    if cur == x:
        cmin = min(i, cmin)
        cmax = max(i, cmax)
        
print(cmin)
print(cmax)
    

    

