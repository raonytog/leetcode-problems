def sumOfTwoNumbers(nums, target):
    answer = []
    for i in range(0, len(nums)):
        for j in range (i+1, len(nums)):
            if nums[i] + nums[j] == target:
                answer.append(i)
                answer.append(j)
                break

    answer.sort()
    print(answer)



