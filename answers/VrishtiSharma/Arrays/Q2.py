nums = [int(i) for i in input("Enter the value of integers : ").split()]
target = int(input("Enter the value of target : "))
a = []
b = []
for i in range(len(nums)):
    for j in range(i+1,len(nums)):
        for k in range(j+1,len(nums)):
            for x in range(k+1,len(nums)):
                if nums[i] + nums[j] + nums[k] + nums[x] == target:
                    print(nums[i],nums[j],nums[k],nums[x])
