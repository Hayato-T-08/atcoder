#21D8104008F takahashihayato 12/5 kadai10c
import numpy as np
import time
ns=[int(i) for i in input().split()]
np.random.seed(ns[1])
A=np.random.randint(0,2,(ns[0],ns[0]))
#print(A)
B=np.random.randint(0,2,(ns[0],ns[0]))
#print(B)
def strassen(a,b):
    n=a.shape[0]
    if(n==1):
        return a*b
    else:
        s=int(n/2)
        a11=a[:s,:s]
        a12=a[:s,s:n]
        a21=a[s:n,:s]
        a22=a[s:n,s:n]
        b11=b[:s,:s]
        b12=b[:s,s:n]
        b21=b[s:n,:s]
        b22=b[s:n,s:n]
        p1=strassen(a11,b12-b22)
        p2=strassen(a11+a12,b22)
        p3=strassen(a21+a22,b11)
        p4=strassen(a22,b21-b11)
        p5=strassen(a11+a22,b11+b22)
        p6=strassen(a12-a22,b21+b22)
        p7=strassen(a11-a21,b11+b12)
   
        c11=p5+p4-p2+p6
        c12=p1+p2
        c21=p3+p4
        c22=p1+p5-p3-p7
        c1=np.concatenate([c11,c12],1)
        c2=np.concatenate([c21,c22],1)
        c=np.concatenate([c1,c2],0)
        return c

# print(strassen(A,B))
# print(np.dot(A,B))
start=time.time()
st=strassen(A,B)
end=time.time()
time_st=end-start

dot=np.dot(A,B)
print("Strassen: time {} sec".format(time_st))
print(np.array_equal(st,dot))