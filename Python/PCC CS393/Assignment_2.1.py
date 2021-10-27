# 1.A school has following rules for grading system:
# a. Below 25 - F
# b. 26 to 45 - E
# c. 46 to 50 - D
# d. 51 to 60 - C
# e. 61 to 80 - B
# f. Above 80 - A
# Ask user to enter marks and print the corresponding grade.

marks = int(input("Enter the Marks: "))
if marks < 25:
    print("Grade = F")
elif 26 <= marks <= 45:
    print("Grade = E")
elif 46 <= marks <= 50:
    print("Grade = D")
elif 51 <= marks <= 60:
    print("Grade = C")
elif 61 <= marks <= 80:
    print("Grade = B")
elif marks > 80:
    print("Grade = A")