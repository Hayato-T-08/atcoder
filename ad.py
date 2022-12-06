import re
def check(str):
    if(str==str[::-1] and len(str)>=2):
        return True
    else:
        return False
def check_s(str):
    if check(str) and (str[-1]== "a" or str[-1]== "b"):
        return True
    else:
        return False 
def find_s(index,str):
    a=str.find("a",index,len(str))
    b=str.find("b",index,len(str))
    if(a!=-1 and b==-1):
        start = a
    elif a==-1 and b!=-1:
        start =b
    elif(a>b and a!=-1 and b!=-1):
        start = b
    elif (b>a and a!=-1 and b!=-1):
        start = a
    else:
        start=-1
    return start

str = input()

start=find_s(0,str)
tmp=""
ans=0
# for i in range(start+1,len(str)):
#     tmp=tmp + str[i]
#     print(tmp)
#     if(check_s(tmp)):
#         ans=ans+1
#         start = find_s(i+1,str)
#         i=start
#         tmp=""
#     print(i)
i = start
while i < len(str):
    tmp=tmp+str[i]
    print(tmp)
    if(check_s(tmp)):
        ans = ans + 1
        start=find_s(i+1,str)
        if(start==-1):
            break
        i=start
        tmp=""
    else:
        i = i+1
    print(i)
print(ans)