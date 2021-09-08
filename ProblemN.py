eights = 0
A = []
n = int(input())
A = input()
x = n
for i in range(0, x):
    if (A[x] == '8'):
        eights += 1

if (eights >= n / 11):
    print(n / 11)
elif (eights < n / 11 and n > 11):
    print(eights)
else:
    print(0)
