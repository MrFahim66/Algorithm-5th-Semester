position = -1

def linearSearch(list, n):
    i = 0

    while i < len(list):
        if list[i] == n:
            globals()['position'] = i
            return True
        i += 1

    return False

list = [4,7,8,12,45,99]
n = 7

if linearSearch(list, n):
    print("Found At : ", position + 1)
else:
    print("Not Found!")
