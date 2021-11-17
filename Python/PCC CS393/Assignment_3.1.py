# Write a program to input a number and print its TABLE.

num = int(input("Enter a Number: "))

for i in range(1, 11):
    print(num, "x", i, "=", (num * i))
