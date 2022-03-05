a= 10
def change_value(a):
    a=20
    print("inside function,a=",a,",address=",id(a))
    return
print("before function call,a=",a,",address=",id(a))
change_value(a)
print("before function call,a=",a,",address=",id(a))