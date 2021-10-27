# 3.A company divided salary in 4 slabs:
#  Grade   Basic( Rs. per month)   D.A.(% of Basic)   H.R.A.(% of Basic)
#    1        10,000 or more              40%                30%
#    2        5,000 - 10,000              40%                25%
#    3        < 5,000 but > 2,000         30%                20%
#    4        2,000 or less               30%                15%
# If the salary which is the total of Basic, D.A., and H.R.A., is above Rs.50,000 per month then Income Tax at the rate of 30% of the annual salary exceeding 50,000 is deducted on monthly basis at source. Taking name of the employees and the Basic(monthly) pay as inputs, a pay slip, which contains Name, Basic monthly pay, DA, HRA, Monthly Income Tax and Net Monthly Salary, Write a python program to perform this job.

name = input("Enter the Name of Employee: ")
basic = float(input("Enter the Basic(monthly) pay: "))

da = 0
hra = 0
incometax = 0

if basic >= 10000:
    da = basic * 0.4
    hra = basic * 0.3
elif 5000 <= basic > 10000:
    da = basic * 0.4
    hra = basic * 0.25
elif 2000 < basic > 5000:
    da = basic * 0.3
    hra = basic * 0.2
elif basic <= 2000:
    da = basic * 0.3
    hra = basic * 0.15

net = basic + da + hra
if net > 50000:
    incometax = net * 0.3
    net = net - incometax

print("\n\t-:PAY SLIP:-")
print("Name of Employee: ", name)
print("Basic Monthly Pay: ", basic)
print("D.A.: ", da)
print("H.R.A: ", hra)
if incometax > 0:
    print("Monthly Income Tax: ", incometax)
print("Net Monthly Salary: ", net)
