import pyautogui
import time
# msg = input("Enter message: ")

msg1 = "Sorry for the inconvenience"
msg2 = "testing @joy"
time.sleep(3)
n = 100
for i in range(0, n):
    pyautogui.typewrite(msg1 + '\n')
    # pyautogui.typewrite(msg2 + '\n' + '\n')