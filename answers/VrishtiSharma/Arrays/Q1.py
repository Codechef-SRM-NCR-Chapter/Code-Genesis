nums = [int(i) for i in input("Enter the value of integers : ").split()]
target = int(input("Enter the value of target : "))
l = []
for i in range(len(nums)):
    for j in range(i+1,len(nums)):
        if nums[i] + nums[j] == target:
            l.append(i)
            l.append(j)
            break
if len(l) == 0:
    print("Try Again!")
print(l)
