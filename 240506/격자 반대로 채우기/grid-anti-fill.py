n = int(input())

arr = [[0 for _ in range(n)] for _ in range(n)]

cnt = 1
for col in range(n-1, -1, -1):
    for row in range(n):
        if (n - col) % 2 == 0:
            arr[row][col] = cnt
            cnt += 1
        else:
            arr[n - row - 1][col] = cnt
            cnt += 1
        
for row in arr:
    for elem in row:
        print(elem, end=' ')
    print()