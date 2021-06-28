a = input("Enter the date in dd format: ")
b = input("Enter the month in mm format: ")
c = input("Enter the year in yy format: ")
if b == '01':
    month = 'January'
elif b == '02':
    month = 'Febuary'
elif b == '03':
    month = 'March'
elif b == '04':
    month = 'April'
elif b == '05':
    month = 'May'
elif b == '06':
    month = 'June'
elif b == '07':
    month = 'July'
elif b == '08':
    month = 'August'
elif b == '09':
    month = 'September'
elif b == '10':
    month = 'October'
elif b == '11':
    month = 'November'
else:
    month = 'December'
print(f"{month} {a} {c}")
