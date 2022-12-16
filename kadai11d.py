from operator import itemgetter
cnt1=0
cnt2=0

def find_qj(c,n,j):
    qj=0
    for i in range(n):
        if i==j-1:
            continue
        if d[i][1]<=d[j-1][0]:
            qj=i+1
    return qj

def opt(c,n):
    global cnt1
    cnt1+=1
    ans=0
    if n==0:
        return 0
    else:
        qj=find_qj(c,n,n)
        ans=max(opt(c,n-1),opt(c,qj)+c[n-1][2])  
    return ans
def opt_memo(c,n):
    global cnt2
    global opt_a
    cnt2+=1
    if opt_a[n]!=-1:
        return opt_a[n]
    else:
        if n==0:
            opt_a[0]=0
            return 0
        else:
            qj=find_qj(c,n,n)
            ans=max(opt_memo(c,n-1),opt_memo(c,qj)+c[n-1][2]) 
            opt_a[n] =ans
            return ans

def calc_best(c,n):
    j=n
    opt_n=opt(c,n)
    return opt_n
def calc_best_memo(c,n):
    j=n
    opt_n=opt_memo(c,n)
    return opt_n

n=int(input())

c=[]

for i in range(n):
    a=[int(i) for i in input().split()]
    c.append(a)
opt_a=[-1]*(n+1)
d=sorted(c,key=itemgetter(1))

x=calc_best(d,n)
y=calc_best_memo(d,n)
print("opt: {}".format(x))
print("calls: {}".format(cnt1))
print("opt: {}".format(y))
print("calls: {}".format(cnt2))
