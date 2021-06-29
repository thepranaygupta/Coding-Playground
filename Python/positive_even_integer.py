n = int(input())
if n==0:
  print(1,end='')
  exit()
if n%2 ==0 and n>0:
  n = 2*((n/2)-1)
  print(int(n),end='')
else:
  print('invalid',end='')