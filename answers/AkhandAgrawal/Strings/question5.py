T = int(input("enter the value of T: "))
list = []
for i in range(T):
    str = input(f"enter the string{i+1}: ")
    list.append(str)

new_list = {x.replace('party', 'pawri') for x in list}

print(new_list)
