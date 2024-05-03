n = int(input())

arr = [
    [0 for _ in range(201)] 
    for _ in range(201)
]

for _ in range(n):
    x1, y1, x2, y2 = map(int, input().split())
    for i in range(y1, y2):
        for j in range(x1, x2):
            arr[i][j] = 1

count = 0
for row in arr:
    count += sum(row)

print(count)