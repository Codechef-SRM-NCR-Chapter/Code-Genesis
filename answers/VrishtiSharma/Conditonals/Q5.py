a = int(input("Enter first number : "))
b = int(input("Enter second number : "))
c = input("Enter the operation you want to use from +, -, *, / : ")
if c == '+':
    s = a+b
elif c == '-':
    s = a-b
elif c == '*':
    s = a*b
elif c == '/':
    s = a/b
print(s)
