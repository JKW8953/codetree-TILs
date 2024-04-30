arr = list(map(int, input().split()))

idx = 0
while idx < 100:
    if arr[idx] == 0:
        break
    idx += 1
print(arr[idx-1] + arr[idx-2] + arr[idx-3])