# Governor-Nephi Bakare, Financial Calculator Python

# print welcome statement that welcomes user and tells what program does

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
# calculate percent income of rent (rent/income*100) (variable)
rent_percentage = rent/income*100
# calculate percent income of utilities (utilities/income*100) (variable)
utilities_percentage = utilities/income*100
# calculate percent income of groceries (groceries/income*100) (variable)
groceries_percentage = groceries/income*100
# calculate percent income of transportation (transportation/income*100) (variable)
transportation_percentage = transportation/income*100
# calculate percent income of spending (spending/income*100) (variable)
spending_percentage = spending/income*100 
# calculate percent income of savings (savings/income*100) (variable)
savings_percentage = savings/income*100
# Your rent is $XX.XX which is XX% of your income. (Print)
print("Your rent is $",rent,", which is", rent_percentage,"of your income.")
# Your utilities is $XX.XX which is XX% of your income. (Print)
print("Your utilities is $",utilities,", which is",utilities_percentage,"of your income.")
# Your groceries is $XX.XX which is XX% of your income. (Print)
print("Your groceries is $",groceries,", which is",groceries_percentage,"of your income.")
# Your transportation is $XX.XX which is XX% of your income. (Print)
print("Your transportation is $",transportation,", which is",transportation_percentage,"of your income.")
# Your savings is $XX.XX which is XX% of your income. (Print)
print("Your savings is $",savings,", which is",savings_percentage,"of your income.")
# Your spending is $XX.XX which is XX% of your income. (Print)
print("Your spending is $",spending,", which is",spending_percentage,"of your income.")
