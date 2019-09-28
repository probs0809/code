n = 10

for i in range(1,n):
    for j in range(i,n):
        print(end="  ")
    for j in range(0,i):
        print(end=" /")
    for j in range(0,i):
        print(end=" \\")
    print("\r")

for i in range(1,n):
    for j in range(0,n):
        if j<=int(n/2 ) or i<=n-3:
            if j==n-1:
                print(end=" |")
            else:
                print(end="  ")
        else:
            print(end= " #")

    for j in range(0,n):
        if j>=int(n/2-1) or i<=n-3:
            if j==0:
                print(end=" |")
            else:
                print(end="  ")
        else:
            print(end= " #")
    print("\r")
    