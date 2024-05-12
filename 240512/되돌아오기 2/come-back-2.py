x, y = 0, 0
dx = [0, 1, 0, -1]
dy = [-1, 0, 1, 0]

dir_num = 0
cnt = 0
flag = False
for cmd in input():
    if cmd == 'L':
        dir_num = (dir_num - 1 + 4) % 4
    elif cmd == 'R':
        dir_num = (dir_num + 1) % 4
    else:
        x += dx[dir_num]
        y += dy[dir_num]
    cnt += 1

    if x == 0 and y == 0:
        flag = True
        break

print(cnt if flag else -1)