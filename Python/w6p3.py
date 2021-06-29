(l1,a,l2,c)=(input(),"","","")
for i in list(l1):
	a=a+chr((ord(i)-65+3)%26+65)
for j in list(a)[::-1]:
    l2=l2+j
for k in list(l2):
      if k=='A':
        c=c+'U'
      elif k=='B':
        c=c+'V'
      elif k=='C':
        c=c+'W'
      elif k=='D':
        c=c+'X'
      elif k=='E':
        c=c+'Y'
      elif k=='F':
        c=c+'Z'
      else:
        c=c+chr(ord(k)-6)
print(c,end="")