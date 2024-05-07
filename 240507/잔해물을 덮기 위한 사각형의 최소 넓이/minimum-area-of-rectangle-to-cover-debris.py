OFFSET = 1000

arr = [
    [0 for _ in range(2001)] 
    for _ in range(2001)
]

for num in range(1, 3):
    x1, y1, x2, y2 = map(lambda x: int(x) + OFFSET, input().split())
    for j in range(y1, y2):
        for i in range(x1, x2):
            arr[i][j] = num

count = 0

row_val = []
col_val = []

for row in range(2001):
    for col in range(2001):
        if arr[row][col] == 1:
            row_val.append(row)
            col_val.append(col)

if len(row_val) != 0 and len(col_val) != 0:
    S = (max(row_val) - min(row_val) + 1) * (max(col_val) - min(col_val) + 1)
else:
    S = 0

print(S)