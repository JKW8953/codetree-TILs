arr = list(map(int, input().split()))

cnt = [0 for _ in range(10)]

for i in arr[0:-1:]:
    cnt[i // 10] += 1

for i in range(1, 10):
    print(f"{i} - {cnt[i]}")