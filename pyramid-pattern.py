" Print the below pattern:
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 "
def printpattern(n):
    for i in range(1, n + 1):
        for j in range(1, i + 1):
            print(j, end=" ")
        print()


n = 5
printpattern(n)


