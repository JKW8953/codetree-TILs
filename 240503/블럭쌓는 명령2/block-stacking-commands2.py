n, k = map(int, input().split())
arr = [0] * (n + 1)

for i in range(k):
    A, B = map(int, input().split())
    for i in range(A, B + 1):
        arr[i] += 1

print(max(arr))