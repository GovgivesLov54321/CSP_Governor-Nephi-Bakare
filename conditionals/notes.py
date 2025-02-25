# Governor-Nephi Bakare, Conditionals Notes Python
name = input("What is your name?:\n")

#What puts something inside of the “if” statement?
if name == "Bakare":
    print("Hi Mr. Bakare")
else: #This happens if the condition is false
    print(f"Hello {name}")

#What do if statements do?
    #checks a condition and if it is true it will do a thing
if name == "Bakare": # <= this is the condition
    print("Hi Mr. Bakare")
#What are boolean statements?
    #A true or false statement
    print("Hi Mr. Bakare")
else:
    print(f"Hi {name}!")

#What do else statements do?
    print("Hi Mr. Bakare")
else: #if the boolean is false, the else statement happens
print(f"Hi {name}!")

#What kind of statement do you use if you have more than 2 needed outcomes?
num = int(input("How many cookies are there:\n"))
#computers read from top to bottom, check the least likely first
if num == 0: #<= if always starts the conditional
    print("There are none.")
elif num == 1: #everything in between should be elif
    print("There is one")
elif num <4:
    ("There are a couple")
elif num < 10:
    print("There are a few")
else: #<= else always ends the conditional
    print("There are many")

#What do each of the different symbols mean in conditionals?
#< Less than
#> Great than
#<= Less than or equal to
#>= Greater than or equal to
#== Equal to
#=== *Doesn't exist in python
#! Not 

#What are the 3 logical operators?

if num <10 and num > 5: #And both booleans must be true
    print("This is a big single digit number")

if num <10 or num > 5: #or means either boolean must be true
    print("This is a big single digit number")

elif not num < 10: #Not changes to check if false
    print("This is a dingle digit number")

#What are logical operators for?
    #Allows the code to hangle more difficult questions. . .increases complexity
#What does a nested conditional statement do?
if num <10:
    if num ==8:
        print("This prints at 8")
    else:
        if num == 4:
            ("There are only enough cookies left for me. . . sorry")
        print("The number is less than 10")
else:
    print("The number is bigger than 10")
