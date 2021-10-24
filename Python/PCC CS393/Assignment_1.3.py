#3. Write a python program to input time in seconds and convert to hour,minutes and seconds.

seconds = int(input("Enter Time in Seconds: "))
hh = seconds//3600
seconds %= 3600
mm = seconds//60
ss = seconds%60
print("hours:", hh, ", minutes:", mm, ", seconds:", ss)
