s = input("Enter the word : ")
if s[0].islower():
    x = 0
    for i in s:
        if (i.isupper()):
            x+=1
    print(x+1)
else:
    print("Not a Camelcase!")
