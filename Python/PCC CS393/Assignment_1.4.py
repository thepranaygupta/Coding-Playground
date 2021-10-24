#4. A company wants to set target for each of the four regions (EAST, WEST , NORTH and SOUTH). The company allots the following percentage target for each region.
#              East      15%
#              West      25%
#              North     30%
#              South     30%
#Write a program in python to input total target and print out the breakup of the target for each region.

total = int(input("Enter Total Target: "))

east = (15/100)*total
west = (25/100)*total
north = (30/100)*total
south = (30/100)*total

print("East=", east, "\nWest=", west, "\nNorth=", north, "\nSouth=", south)
