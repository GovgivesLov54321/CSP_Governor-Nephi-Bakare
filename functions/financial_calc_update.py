# Governor-Nephi Bakare, Financial Calculator Update Python
def info(cost, income, type):
    rent_percentage = cost/income*100
    print(f"Your {type} is ${cost:.2f}, which is {rent_percentage} percent of your income.")

# print welcome statement that welcomes user and tells what program does

name = input("What is your first and last name?\n")

print(f"Welcome to my progam, {name}. This program will calculate the percentage of your spendings of your income!\n")

def info(answer):
    return float (f ""))


# ask what their income is (variable an input)
income = float(input("What is your income?\n"))
# ask what their rent is (variable an input)
rent = float(input("What is your rent?\n"))
# ask what their utilities is (variable an input)
utilities = float(input("How much do your utilities cost?\n"))
# ask what their groceries is (variable an input)
groceries = float(input("How much do your groceries cost?\n"))
# ask what their transportation is (variable an input)
transportation = float(input("How much does transporation cost?\n"))
# calculate savings as 10% of income (income*.1)
savings = income*.1
# calculate spending as income-savings-rent-utilities-groceries-transportation (variable)
spending = income-savings-rent-utilities-groceries-transportation

info(rent, income, "rent")
info(utilities, income, "utilities")
info(groceries, income, "groceries")
info(transportation, income, "transportation")
info(savings, income, "savings")
info(spending, income, "spending")