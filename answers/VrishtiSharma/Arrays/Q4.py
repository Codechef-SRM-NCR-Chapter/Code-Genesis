n = int(input("Enter the number of rows : "))
l = []
for i in range(n):
    a = [int(i) for i in input("Enter the numbers : ").split()]
    l.append(a)
list = []
for i in range(len(l)):
    l[i].sort()
    list.append(l[i][0])
print(sum(list))
