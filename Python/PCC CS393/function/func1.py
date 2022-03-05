my_list=[1,2,4,5,6]
def change_value(my_list):
    my_list[3]=30
    print("value inside the function,my_list=",my_list,",address=",id(my_list))
    return
print("before function call,my_list=",my_list,",address=",id(my_list))
change_value(my_list)
print("after function call,my_list=",my_list,",address=",id(my_list))