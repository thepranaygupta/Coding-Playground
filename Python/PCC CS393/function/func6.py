# Write a progam that computes  P(n, r)

def fact(n):
    f=1
    if(n==0 or n==1):
        return 1
    else:
        for i in range(1,int(n+1)):
            f=f*i
    return f
n=int(input("Enter the value of n : "))
r=int(input("Enter the value of r : "))
result = float(fact(n))/float(fact(r))
print("P(",str(n),"/",str(r),")=",str(result))