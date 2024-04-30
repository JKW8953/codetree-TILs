arr = list(map(int, input().split()))

idx = 0
for elem in arr:
    if elem % 3 == 0:
        print(arr[idx-1])
        break
    idx += 1