customerID = input("Input Customer ID: ")
name = input("Input the name of the customer: ")
waterAmount = int(input("Input the litres consumed by the customer: "))
if waterAmount <= 199:
    charge = 3
elif waterAmount > 200 and waterAmount < 400:
    charge = 3.35
elif waterAmount >= 400 and waterAmount < 600:
    charge = 4.80
else:
    charge = 5.10

bill = waterAmount*charge
if bill > 1250:
    bill = bill*(15/100) + bill
print(customerID)
print(name)
print(waterAmount)
print(int(bill))
