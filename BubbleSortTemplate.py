def Bubblesort(nums):
    for i in range (len(numbers)-1, 0, -1):
        for j in range (i):
            if nums[j] > nums[j+1]:
                temp = nums[j]
                nums[j] = nums [j+1]
                nums[j+1] = temp

                print(nums)

numbers = [5,7,3,4,7,8,9,10,45,14,46,67,89,69]
print(numbers)
print()
Bubblesort(numbers)
