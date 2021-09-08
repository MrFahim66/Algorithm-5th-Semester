n = int(input())

for i in range(0, n):
    x, y = (input().split())

    x = int (x)
    y = int (y)

    if y >= x:
        totalT = (y * 4) + (2*5) + (3*3)
    else:
        totalT = ((x - y) * 4) + (x * 4) + (2*5) + (3*3)

    print("Case " + str(i + 1) + ": " + str(totalT))
