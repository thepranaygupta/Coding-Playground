# Write a program to calculate the volume of a cuboid using default arguments

def volume(l,w=3,h=4):
    print("Length : ",l,"\tWidth : ",w,"\tHeight : ",h)
    return l*w*h
print("Volume : ",volume(4,6,2))
print("Volume : ",volume(4,6))
print("Volume : ",volume(4))