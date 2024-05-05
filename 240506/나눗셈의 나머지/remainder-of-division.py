a, b = map(int, input().split())

arr = [0 for i in range(10)]

while a > 1:
    arr[a % b] += 1
    a //= b

sum = 0
for elem in arr:
    sum += pow(elem, 2)

print(sum)