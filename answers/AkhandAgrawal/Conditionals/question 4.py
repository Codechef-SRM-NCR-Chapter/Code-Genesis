x, y = input().split()
x = int(x)
y = int(y)
if x > 0 and y > 0:
    print("Quadrant 1")
elif x < 0 and y > 0:
    print("Quadrant 2")
elif x < 0 and y < 0:
    print("Quadrant 3")
elif x > 0 and y < 0:
    print("Quadrant 4")
elif x == 0:
    print("Y axis")
elif y == 0:
    print("X axis")
elif x == 0 and y == 0:
    print("Origin")
