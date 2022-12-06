import math
def f(x):
    return math.exp(x) + 7*(x**3)
a = float(input())
left = 0
right = 1
while right-left>1e-5:
    center = (right+left)/2
    if(f(center)>a):
        right =  center
    else:
        left = center

print(center)
print(f(center))