# Write a program to remove the given key from a dictionary

rainfall = {'SUNDAY': 3.4, 'MONDAY':5.2, 'TUESDAY':1.7, 'WEDNESDAY':0.0, 'THURSDAY':0.15, 'FRIDAY':4.0, 'SATURDAY':1.2}
print("Initial Dictionary:", rainfall)
key = input("Enter the key to delete: ")
if key in rainfall:
    del rainfall[key]
else:
    print("Key not found!")
print("Updated Dictionary:", rainfall)