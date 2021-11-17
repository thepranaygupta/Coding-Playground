# Write a program to input the value of N and print all the ODD and EVEN numbers from 1 to N.

n = int(input("Enter the Value of N: "))

print("ODD numbers from 1 to", n, "are: ")
for i in range(1, n + 1, 2):
    print(i, end=" ")

print("\nEVEN numbers from 1 to", n, "are: ")
for i in range(2, n + 1, 2):
    print(i, end=" ")