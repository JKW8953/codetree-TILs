n, m = map(int, input().split())

dxs, dys = [1, 0, -1, 0], [0, -1, 0, 1]

def in_range(x, y):
    return 1 <= x <= n and 1 <= y <= n

def checked(x, y):
    cnt = 0
    for dx, dy in zip(dxs, dys):
        nx, ny = x + dx, y + dy
        if in_range(nx, ny) and nx != 0 and ny != 0 and arr[nx][ny] == 1:
            cnt += 1
    return True if cnt == 3 else False

arr = [[0 for _ in range(n + 1)] for _ in range(n + 1)]


for _ in range(m):
    x, y = map(int, input().split())
    arr[x][y] = 1
    print(int(checked(x, y)))