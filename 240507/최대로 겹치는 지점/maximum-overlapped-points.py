n = int(input())
arr = [0] * (101)

for i in range(n):
    x1, x2 = map(int, input().split())
    for i in range(x1, x2 + 1):
        arr[i] += 1

print(max(arr))