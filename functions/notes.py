# Governor-Nephi Bakare, Functions Notes Python

# functions hold/organize actions to be reused


#def add(numOne, numTwo):#parameters set the name of the variables (just for the function)

    
    #numOne = int(input("Please tell me a number: \n"))
    #numTwo = int(input("Please tell me a number: \n"))
    #print (numOne+numTwo)
    #add(int(input("Please tell me a number: \n")))
    #dd()

#number = int(input("Please tell me a number: \n"))

#print(add(number,21))

def values(type):
    return input(f"Please give me a {type}:\n")


name = values("names")
place = values("place")
verb = values("verb")

print(f"{name} was realy fast getting to {place} because they {verb} the whole way there.")