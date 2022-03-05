# write a program in python to print even numbers from the following list

mylst = [True, "08", 78, "Rahul", 24, '31', 0, -44, "10"]
for i in mylst:
    if type(i) == int and i % 2 == 0:
        print(i)