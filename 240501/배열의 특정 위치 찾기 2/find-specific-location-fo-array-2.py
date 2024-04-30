arr = list(map(int, input().split()))

idx, odd, even = 0, 0, 0
for i in range (10):
    if i % 2 == 0:
        odd += arr[idx]
    else:
        even += arr[idx]
    idx += 1

print(abs(odd - even))