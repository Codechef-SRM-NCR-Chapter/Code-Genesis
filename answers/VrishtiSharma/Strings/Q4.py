s = input("Enter the sentence : ")
k = int(input("Enter the value of k : "))
s = s.split()
for i in range(k):
    print(s[i], end = " ")
