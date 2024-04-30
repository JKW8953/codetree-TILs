arr = list(map(int, input().split()))

a, b = 0, 0
for i in range(1, 10, 2):
    a += arr[i]

b = (arr[2] + arr[5] + arr[8]) / 3

print(a, f"{b:.1f}")