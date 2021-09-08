N = int(input())
heights = []
for i in range(0, N):
    elements = int(input())
    heights.append(elements)

Q = int(input())
while Q:
    Q -= 1
    queries = int(input())
    shorter = taller = -1
    for i in range(0, N):
        if (heights[i] < queries):
            shorter = heights[i]
        if (heights[i] > queries):
            taller = heights[i]
            break
    if (shorter == -1):
        print("X ")
    else:
        print(shorter," ")
    if (taller == -1):
        print("X")
    else:
        print(taller)
