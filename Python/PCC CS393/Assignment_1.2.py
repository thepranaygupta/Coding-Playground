#2. Write a python program to accept two values and swap them without using 3rd variable.
a = eval(input("Enter a Value: "))
b = eval(input("Enter a Value: "))

print("Before Swapping:-")
print("a =", a, ", b =", b)

a, b = b, a
print("After Swapping:-")
print("a =", a, ", b =", b)
