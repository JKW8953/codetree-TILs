n = int(input())
arr = list(map(int, input().split()))
idx = []

idx.append(0)

for i in range(1, n):
    max_val = idx[-1]
    if arr[i] > arr[max_val]:
        idx.append(i)

for i in idx[::-1]:
    print(i + 1, end=' ')