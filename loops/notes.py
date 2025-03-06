# Governor-Nephi Bakare, Loops Notes Python

#What is a loop? 
    #A section of code that repeats multiple times

#What are the two types of loops?
    #for loop
nums = [12,3,66,7,3,3,2]

for num in nums:
    print(num)

    #while loop
x = 0

while x < 10:
    print(x)
    x+= 1

#What is iteration
    #One instance of the loop
    #iteration is the amount of times it's looping through

#What are lists? 
    #A variable that holds multiple values
nums = [1,2,3,4,5,60]
siblings = ["Alex", "Genghis", "Xerxes"]
print(nums) #prints whole list is ugly
print(siblings[0]) #prints 1 item from the list *0 is the first one

siblings[0] = "Jake"
#siblings.pop(1)
#siblings.insert(2, "Deneeshaneesha")
#siblings.insert()
#print(siblings)
#How do you make lists in python? 
    #step 1: brackets *[]
    
    #step 2: add in items with correct data types *"" for words/letters, and none for numbers

    #step 3: add a comma in between each item 

#How do you make for loops in python? 
for sibling in siblings:
    print(sibling)

for x in range(1,5):
    print(x)

#How do you make while loops in python?
import random 
x = 1 #variable to keep count of iteration
goose = random.randint(1-20)

while x <=20:
    if x == goose:
       print ("Goose!")
       break #tells the loop to stop
    else:
        print("Duck!")
    x+= 1
    #print("Gigachad")