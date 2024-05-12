n = int(input())
arr = list(map(int, input().split()))

ans = 0
for i in range(n):
    for j in range(i + 1, n):
        if arr[i] <= arr[j]:
            for k in range(j + 1, n):
                if arr[j] <= arr[k]:
                    ans += 1

print(ans)