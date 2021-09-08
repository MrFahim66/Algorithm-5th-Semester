T = int(input())
n = int(input())
S = []

for i in range(0, T):
    for j in range(0, n):
        element = input()
        S.append(element)
    print(S)
    X = []
    for i in range(0, n):
        ele2 = (S[i] - S[i + 1])
        X.append(abs(ele2))
    X.sort()
    print(X[len(X)])


