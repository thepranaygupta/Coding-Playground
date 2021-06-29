(s1,s2,a,b)=(sorted(list(input().upper())),sorted(list(input().upper())),[],[])
for f in s1:
	if f.isalnum():
		a.append(f)
for f in s2:
	if f.isalnum():
		b.append(f)
if a==b:
  print("Yes",end="")
else:
  print("No",end="")