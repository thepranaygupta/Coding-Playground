# 2.Write a program in python that will accept 3 angles of the triangle and check that triangle is possible,
# if possible than check that is it “Acute angled traingle”(All angle are <90 degree),
# ”Right angled triangle”(One angle is 90 degree) or
# “Obtuse”(One angle is >90 degree).
# Also print a “Triangle is not possible” if the sum of the angles are not 180 degree.

a = float(input("Enter the First Angle: "))
b = float(input("Enter the Second Angle: "))
c = float(input("Enter the Third Angle: "))

if (a + b + c) == 180:
    print("Triangle is Possible")
    if a<90 and b<90 and c<90:
        print("Acute angled Triangle")
    elif a==90 or b==90 or c==90:
        print("Right angled Triangle")
    else:
        print("Obtuse angled Triangle")
else:
    print("Triangle not Possible")