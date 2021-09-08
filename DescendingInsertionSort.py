def sort(a, n):
    for i in range(n, 0, -1):
        print()
        for j in range(n, n - i, -1):
            if (a[j] > a[j - 1]):
                a[j], a[j - 1] = a[j - 1], a[j]
            print(a)

a = [2,0,1,15,1,3,6,7,4]
n = 9

sort(a, n - 1)