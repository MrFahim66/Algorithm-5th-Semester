test_case = int(input())
list = []
for i in range(0, test_case):
    ele = input()
    list.append(ele)

    list.sort(reverse=True)

    print("Sorted List : ", list)
