def SelectionSort(nums):
    for i in range(len(nums)):
        minpos = i
        for j in range(i, len(nums)):
            if nums[j] < nums[minpos]:
                minpos = j

        temp = nums[i]
        nums[i] = nums[minpos]
        nums[minpos] = temp

        print(nums)


numbers = [5,7,3,4,7,8,9,10,45,14,46,67,89,69]
print(numbers)
print()
SelectionSort(numbers)