n = int(input())

arr = [0 for _ in range(2001)]

start = 1000

for _ in range(n):
    x, LR = input().split()
    x = int(x)
    if LR == 'R':
        for i in range(start, start + x):
            arr[i] += 1
        start += x - 1
    else:
        for i in range(start - x, start):
            arr[i] += 1
        start -= x - 1

cnt = 0
for elem in arr:
    if elem >= 2:
        cnt += 1
print(cnt)