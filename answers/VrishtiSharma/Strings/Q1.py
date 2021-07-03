s = input("Enter : ") 
l = list(s)
for i in range(65,91):
    print("The number of", chr(i), "is : ", l.count(chr(i)))
for i in range(97,123):
    print("The number of", chr(i), "is : ", l.count(chr(i)))
for i in range(0,10):
    print("The number of", i, "is : ", l.count(str(i)))
