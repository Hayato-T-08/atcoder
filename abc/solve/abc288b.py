a=[int(i) for i in input().split()]
n=a[0]
k=a[1]
s=[]
for i in range(n):
    string=str(input())
    s.append(string)
s=s[:k]
s.sort()
for i in s:
    print(i)
