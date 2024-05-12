x, y = 0, 0
dir_num = 3
dx, dy = [1, 0, -1, 0], [0, -1, 0, 1]

for cmd in input():
    if cmd == 'L':
        dir_num = (dir_num - 1) % 4
    elif cmd == 'R':
        dir_num = (dir_num + 1) % 4
    else:
        x += dx[dir_num]
        y += dy[dir_num]
    

print(x, y)