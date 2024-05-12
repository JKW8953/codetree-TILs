dx = [0, 1, -1, 0]
dy = [1, 0, 0, -1]

mapper = {
    'R': 0,
    'D': 1,
    'U': 2,
    'L': 3
}

n, t = map(int, input().split())
r, c, d = input().split()
r, c = int(r), int(c)
d = mapper[d]

def in_range(x, y):
    return 1 <= x <= n and 1 <= y <= n

for _ in range(t):
    nr = r + dx[d]
    nc = c + dy[d]

    if in_range(nr, nc):
        r, c = nr, nc
    else:
        d = 3 - d

print(r, c)