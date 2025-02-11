# Governor-Nephi Bakare, Strings Notes Python

#string is a data type that holds any info surrounded by quotation marks "" ''

sentence = "The quick brown fox jumps over the lazy dog"

#name = input("What is your first name?\n").strip().upper()

#print(f"Hello {name} My name is Gov, welcome to my program")

#print(f"this is your name {name}")

#print("this is your name "+ name)

#print(len(sentence))

#print(sentence[4])

start = (sentence.find("brown"))
length = len("brown fox")
print(sentence[start:start+length])