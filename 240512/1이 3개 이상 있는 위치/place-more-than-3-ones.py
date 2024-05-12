dxs, dys = [1, 0, -1, 0], [0, -1, 0, 1]

def in_range(x, y):
    return 0 <= x < n and 0 <= y < n

def check(x, y):
    cnt = 0
    for dx, dy in zip(dxs, dys):
        nx, ny = x + dx, y + dy
        if in_range(nx, ny) and arr[nx][ny] == 1:
            cnt += 1
    if cnt >= 3:
        return True


n = int(input())

arr = [list(map(int, input().split())) for _ in range(n)]

ans = 0
for x in range(n):
    for y in range(n):
        if check(x, y):
            ans += 1

print(ans)