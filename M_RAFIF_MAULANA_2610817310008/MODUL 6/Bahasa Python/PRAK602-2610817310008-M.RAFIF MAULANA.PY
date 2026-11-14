n = int(input())
nums = input().split()

result = [0] * n
for i in range(n):
    result[i] = int(nums[i]) * (i + 1)

print(*result)