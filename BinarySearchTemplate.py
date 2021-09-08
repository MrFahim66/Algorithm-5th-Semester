position = -1

def BinarySearch(list, n):
    lower_Bound = 0
    upper_Bound = len(list) - 1

    while lower_Bound <= upper_Bound:
        mid = (lower_Bound + upper_Bound) // 2

        if list[mid] == n:
            globals()['position'] = mid
            return True
        else:
            if list[mid] < n:
                lower_Bound = mid
            else:
                upper_Bound = mid


list = [4, 7, 8, 12, 45, 99, 69, 87, 79, 25, 36]
n = 12
list.sort()

if BinarySearch(list, n):
    print(list)
    print("Found At : ", position + 1)
else:
    print(list)
    print("Not Found!")
