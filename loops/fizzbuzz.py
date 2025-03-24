# Governor-Nephi Bakare, FizzBuzz Python

numero = 1

while numero <=50:
    if numero % 5 == 0 and numero % 3 == 0:
        print("FizzBuzz")
    elif numero % 5 == 0:
        print("Buzz")
    elif numero % 3 == 0:
        print("Fizz")
    else:
        print(numero)
    numero+=1