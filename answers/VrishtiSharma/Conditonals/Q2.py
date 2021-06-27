def month(m):
    switcher = {
        1 : "January",
        2 : "February",
        3: "March",
        4 : "April",
        5 : "May",
        6 : "June",
        7 : "July",
        8 : "August",
        9 : "September",
        10 : "October",
        11 : "November",
        12 : "December"
    }
    return switcher.get (m,"Invalid Month")

d = int(input(" Enter the date : "))
m = int(input("Enter the month : "))
y = int(input("Enter the year : "))

print(month(m), d, y, end = " ")
