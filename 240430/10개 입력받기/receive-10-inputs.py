arr = list(map(int, input().split()))
cnt = 0

for elem in arr:
    if elem == 0:
        break
    cnt += 1

sum_val = sum(arr[cnt - 1::-1])

mean = sum_val / cnt

print(sum_val, f"{mean:.1f}")