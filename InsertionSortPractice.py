def insertion_sort(List):
    for i in range(0, len(List)):
        value_to_sort = List[i]
        while List[i - 1] > value_to_sort and i > 0:
            List[i], List[i - 1] = List[i - 1], List[i]
            i -= 1
            print(List)
    return List

ListA = [2,0,1,1,5,1,4,2,1,1]
n = int(input())
for i in range(0, n):
    ele = int(input())
    ListA.append(ele)

sorted_List = insertion_sort(ListA)
print(sorted_List)
