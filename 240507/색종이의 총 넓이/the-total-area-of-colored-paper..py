OFFSET = 100

n = int(input())

arr = [
    [0 for _ in range(201)] 
    for _ in range(201)
]

for _ in range(n):
    x, y = map(lambda x: int(x) + OFFSET, input().split())
    for j in range(y, y + 8):
        for i in range(x, x + 8):
            arr[i][j] = 1

count = 0
for row in arr:
    count += sum(row)

print(count)