OFFSET = 100

n = int(input())
arr = [
    [0 for _ in range(201)] 
    for _ in range(201)
]

for num in range(n):
    x1, y1, x2, y2 = map(lambda x: int(x) + OFFSET, input().split())
    for j in range(y1, y2):
        for i in range(x1, x2):
            arr[i][j] = num % 2

count = 0

for row in arr:
    for elem in row:
        if elem == 1:
            count += 1

print(count)