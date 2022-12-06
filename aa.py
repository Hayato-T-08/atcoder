
n = int(input())
time = []
limit = []
for i in range(n):
    x,y = map(int,input().split())
    time.append(x)
    limit.append(y)
inv = sorted([[a, b] for a, b in zip(limit, time)])
t=0
start=[]
late = []
for i in range(n):
    s=t
    start.append(s)
    t=t+inv[i][1]
    late.append(t-inv[i][0])
    
ans=max(late)
if(ans>0):
    print(ans)
else:
    print(0)
