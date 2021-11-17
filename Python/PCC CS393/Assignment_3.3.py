# Write a program to input a number. Check and print whether it is a prime number or not.

num = int(input("Enter a Number: "))
flag = 1

for i in range(2, int(num/2)):
    if(num%i == 0):
        flag = 0

if flag == 1:
    print(num, "is a Prime Number")
else:
    print(num, "is not a Prime Number")