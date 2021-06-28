basic = int(input("Enter the salary: "))
grade = input("Enter the grade(in uppercase): ")
if grade == 'A':
    allow = 1700
elif grade == 'B':
    allow = 1500
else:
    allow = 1300
hra = (20/100) * basic
da = (50/100)*basic
pf = (11/100) * basic
totalSalary = int(basic + hra + da + allow-pf)
print(totalSalary)
