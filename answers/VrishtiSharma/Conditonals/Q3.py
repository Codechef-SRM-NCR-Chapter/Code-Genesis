a = int(input("Enter Customer ID : "))
b = input("Enter the name of the customer : ")
c = int(input("Enter the litres consumed by the customer : "))
if c <= 199:
    s = c * 3
elif 200 <= c < 400:
    s = c * 3.35
elif 400 <= c < 600:
    s = c * 4.80
else:
    s = c * 5.10
if s > 1250:
    s = s + (15/100 * s)
print(a)
print(b)
print(c)
print(int(s))
