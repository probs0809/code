n = int(input("Count: "))

for i in range (0, n):
    if i!=0:
        for j in range (i,n):
            print(end=" *")
        for j in range (0,i-1):
            if i==n-1 :
                print(end=" *")
            elif j==i-2:
                print(end=" *")
            else:
                print(end="  ")
        for j in range (0,i-2):
            if i==n-1:
                print(end=" *")
            else:
                print(end="  ")
        for j in range (i,n):
            if i==1 and j==1:
                print(end="")
            else:
                print(end=" *")
        print("\r")
    else:
        print(end="")
        

for i in range (0, n):
    if i!=0:
        if i!=1:
            for j in range (0,i):
                print(end=" *")
            for j in range (i,n-1):
                if j==n-2:
                    print(end=" *")
                else:
                    print(end="  ")
            for j in range (i,n-2):
                print(end="  ")
            for j in range (0,i):
                if i==n-1 and j == n-2:
                    print()
                else:
                    print(end=" *")
            print("\r")
    else:
        print(end="")
        

    