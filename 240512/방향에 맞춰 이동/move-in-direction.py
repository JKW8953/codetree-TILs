n = int(input())
x, y = 0, 0
dx, dy = [1, 0, -1, 0], [0, -1, 0, 1]

for _ in range(n):
    dir_str, dist = input().split()
    dist = int(dist)
    if dir_str == 'E':
        dir_num = 0
    elif dir_str == 'S':
        dir_num = 1  
    elif dir_str == 'W':
        dir_num = 2
    else:
        dir_num = 3

    x += dx[dir_num] * dist
    y += dy[dir_num] * dist

print(x, y)