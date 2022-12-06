import math 
n = int(input())
s = []
t = []
for i in range(n):
    x,y = map(int,input().split())
    s.append(x)
    t.append(y)

inv = sorted([[a, b] for a, b in zip(t, s)])

ans, fin = 0, -math.inf

for a, b in inv:
  if fin <= b:
    ans += 1
    fin = a
print(ans)
