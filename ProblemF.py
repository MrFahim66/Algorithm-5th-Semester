x = 0
player = input()
for i in range(1, len(player)):
    if (player[i] == player[i - 1]):
        i = i - 2
        x += 1

if (x % 2 == 1):
    print("Yes")
else:
    print("No")
