# TODO
#Receive height from the user. Height should be between 1 and 8
from cs50 import get_int
while True:
    height = get_int("Enter height between 1 and 8: ")
    if height > 0 and height < 9:
        break


#Code for pyramid
print("Outside of the loop")
