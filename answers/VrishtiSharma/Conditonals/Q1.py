n = int(input("Enter the basic salary : "))
x = input("Enter grade : ")
hra = 20/100 * n
da = 50/100 * n
pf = 11/100 * n
if x == 'A':
    allow = 1700
elif x == 'B':
    allow = 1500
else:
    allow = 1300
totalSalary = n + hra + da + allow - pf
print(int(totalSalary))
