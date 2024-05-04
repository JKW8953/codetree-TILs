arr = list(map(int, input().split()))

cnt = [0 for _ in range(10)]

for elem in arr:
    if elem == 0:
        break
    if elem < 10:
        continue
    cnt[elem // 10] += 1

for i in range(1, 10):
    print(f"{i} - {cnt[i]}")