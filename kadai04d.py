import math
a = [int(i) for i in input().split()]
b = [int(i) for i in input().split()]
bug = int(input())
def f(A,a,b):
    total=0
    for i in range(len(a)):
        if(b[i]*A>1000-a[i]):
            total = total + 1000 - a[i]
        else:
            total = total +b[i]*A
    return total

left = 0
right = bug
center = int((right+left)/2)
while right-left>1:
    center = int((right+left)/2)
    if(f(center,a,b)>bug):
        right =  center
    else:
        left = center
print(left)
