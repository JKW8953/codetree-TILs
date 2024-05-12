n, t = map(int, input().split())
str = input()
arr = [list(map(int, input().split())) for _ in range(n)]

x, y = n//2, n//2
dx = [-1, 0, 1, 0]
dy = [0, 1, 0, -1]

def in_range(x, y):
    return 0 <= x < n and 0 <= y < n

dir_num = 0
ans = arr[x][y]
for cmd in str:
    if cmd == 'L':
        dir_num = (dir_num + 3) % 4
    elif cmd == 'R':
        dir_num = (dir_num + 1) % 4
    else:
        nx = x + dx[dir_num]
        ny = y + dy[dir_num]
        if in_range(nx, ny):
            x, y = nx, ny
            ans += arr[x][y]

print(ans)