n = int(input().strip())
if(n%2!=0):
    print("Weird")
else:
    if(n in range (2,5)):
        print("Not Weird")
    elif(n>6 and n<20):
        print("Weird")
    else(n>20):
        print("Not Weird")