n = int(input())
arr = [
    [0 for _ in range(n)]
    for _ in range(n)
]
for i in range(1, n+1):
    for j in range(n):
        print(i + j * n, end=' ')
    print()