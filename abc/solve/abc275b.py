
x = list(map(int,input().split()))
div=998244353
for i in range(len(x)):
    x[i]=x[i]%div
num = (x[0]*x[1]*x[2])-(x[3]*x[4]*x[5])
print(num)