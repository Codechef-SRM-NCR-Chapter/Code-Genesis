T = int(input("Enter the no. of test cases : "))
for i in range(T):
    s = input("Enter the word : ")
    x = s[::-1]
    if s==x:
        print("YES")
    else:
        print("NO")
