
a = int(input())

v = [1, 5, 10, 50, 100, 500, 1000, 2000, 5000, 10000]
ans = 0
for p in v[::-1]:
  t = a//p
  a -= t*p
  ans += t

print(ans)