n = int(input("Enter the number of rows : "))
i = 1
while(i<=n):
    x = 65 + n - i
    j = 1
    while(j<=i):
        y = x + j - 1
        print(chr(y), end = "")
        j+=1
    print("\t")
    i+=1
