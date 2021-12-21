# Python program to check if a given key exists in a Dictionary or not if present print its value in the dictionary

rainfall = {'SUNDAY': 3.4, 'MONDAY':5.2, 'TUESDAY':1.7, 'WEDNESDAY':0.0, 'THURSDAY':0.15, 'FRIDAY':4.0, 'SATURDAY':1.2}
key = str(input("Enter key to check: "))
if key in rainfall.keys():
    print("Key is present and value of the key is:", rainfall[key])
else:
    print("Key isn't present!")