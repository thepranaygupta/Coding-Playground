# Write a menu driven program in python which will accept a number and choice as ‘a’,’b’,’c’ from the user and  calculate the following according to the user choice:
# a.	Factorial of each digit (Calculate factorial of each digit and return the the same).
# b.	Reverse of that number (Calculate Reverse of the number and display)
# c.	Factor’s of that number (Display factors of the number)

n = int(input("Enter a Number: "))
choice = input("Enter your Choice: ")

if choice == "a":
    fact = 1
    for i in range(1, n + 1):
        fact = fact * i
    print("Factorial of", n, "is = ", fact)

elif choice == "b":
    print("Reverse of", n, "is: ", end=" ")
    rev = 0
    while n > 0:
        rem = n % 10
        rev = rev * 10 + rem
        n = n // 10
    print(rev)

elif choice == "c":
    print("Factors of", n, "are: ", end=" ")
    for i in range(1, n + 1):
        if n % i == 0:
            print(i, end=" ")
