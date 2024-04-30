arr = list(map(float, input().split()))

sum_val = 0

for i in arr:
    sum_val += i

mean = sum_val / len(arr)

print(f"{mean:.1f}")