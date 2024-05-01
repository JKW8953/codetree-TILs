arr = list(map(int, input().split()))

max_val = min_val = arr[0]

for i in range(100):
    if abs(arr[i]) == 999:
        break
    if max_val < arr[i]:
        max_val = arr[i]
    if min_val > arr[i]:
        min_val = arr[i]

print(max_val, min_val)