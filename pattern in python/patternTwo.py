n = 10

for i in range(1,n):
    for j in range(0,i):
        print(end=" \\")

    for j in range(i,n-1):
        print(end="  ")

    for j in range(i,n-1):
        print(end="  ")

    for j in range(0,i):
       print(end=" /")
    print("\r")


for i in range(1,n):
    for j in range(0,i):
        print(end="  ")

    for j in range(i,n-1):
        print(end=" \\")

    for j in range(i,n-1):
        print(end=" /")

    for j in range(0,i):
        print(end="  ")
    print("\r")