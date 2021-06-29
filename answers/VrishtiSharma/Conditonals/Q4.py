x,y = map(int, input("Enter two integers : ").split())
if x>0 and y>0:
    print("Quadrant 1")
elif x<0 and y>0:
    print("Quadrant 2")
elif x<0 and y<0:
    print("Quadrant 3")
elif x>0 and y<0:
    print("Quadrant 4")
elif y == 0:
    print("X axis")
elif x == 0:
    print("Y axis")
elif x == 0 and y == 0:
    print("Origin")
