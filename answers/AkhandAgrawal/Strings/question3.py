str = input("enter the string: ")
condition = True
for i in range(0, int(len(str)/2)):
    if str[i] != str[len(str)-i-1]:
        condition = False
    else:
        condition = True

if (condition):
    print("Yes")
else:
    print("No")
