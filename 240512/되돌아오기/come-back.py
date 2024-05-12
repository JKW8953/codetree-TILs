x, y = 0, 0
dx = [0, 1, -1, 0]
dy = [1, 0, 0, -1]

mapper = {
    'S': 0,
    'E': 1,
    'W': 2,
    'N': 3
}

n = int(input())

cnt = 0
flag = False
for _ in range(n):
    dir_str, dist = input().split()
    dist = int(dist)
    d = mapper[dir_str]

    for _ in range(dist):
        x += dx[d]
        y += dy[d]
        cnt += 1

        if x == 0 and y == 0:
            flag = True
            break
    
    if flag:
        break

print(cnt if flag else -1)