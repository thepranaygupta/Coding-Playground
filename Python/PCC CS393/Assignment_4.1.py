# Write a program in python to input the lower and upper limit and print all the prime number lies between the range. Also print the following information
# a.	Count number of prime numbers.
# b.	Count number of 2 digit prime number.

a = int(input("Enter Upper Limit: "))
b = int(input("Enter Lower Limit: "))
primeCount = 0
twoDigitPrimeCount = 0

print("All Prime Numbers between", a, "and", b, " are: ", end=" ")

for i in range(a, b + 1):
    isPrime = 1
    digits = 0
    for j in range(2, i):
        if i % j == 0:
            isPrime = 0
    if isPrime == 1:
        primeCount += 1
        print(i, end=" ")
        while i > 0:
            digits += 1
            i //= 10
        if digits == 2:
            twoDigitPrimeCount += 1

print("\nNumber of Prime Numbers: ", primeCount)
print("Number of 2 Digit Prime Numbers: ", twoDigitPrimeCount)
