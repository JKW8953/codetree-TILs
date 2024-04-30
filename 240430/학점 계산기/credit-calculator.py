n = int(input())
arr = list(map(float, input().split()))

sum_val = 0

for i in arr:
    sum_val += i

mean = sum_val / len(arr)

print(f"{mean:.1f}")

if mean >= 4.0:
    print("Perfect")
elif mean >= 3.0:
    print("Good")
else:
    print("Poor")