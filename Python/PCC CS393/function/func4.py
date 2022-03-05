# Write a program to print the following pattern using default arguments

def pattern(c='%',n=6,r=1):
    for i in range(r):
        print()
        for j in range(n):
            print(c,end=' ')
c=input("Enter the character to be displayed : ")
n=int(input("Enter the number of rows : "))
m=int(input("Enter the number of columns : "))
pattern()
pattern(c)
pattern(c,n)
pattern(c,n,m)