n = int(input())
s=input()
takahashi=0
aoki=0
idx_takahashi=0
idx_aoki=0
for i in range(len(s)):
    if(s[i]=='T'):
         takahashi=takahashi+1
         idx_takahashi=i
    else:
         aoki=aoki+1
         idx_aoki=i
if(takahashi>aoki):
     print('T')
elif(takahashi<aoki):
    print('A')
else:
     if(idx_aoki>idx_takahashi):
          print('T')
     else:
          print('A')
