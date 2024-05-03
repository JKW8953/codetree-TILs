n = int(input())

arr = [0] * 201

for _ in range(n):
    A, B = map(int, input().split())
    for i in range (A+100, B+99):
        arr[i] += 1

print(max(arr))