n = int(input())

color = ['C' for _ in range(2000001)]
white = [0 for _ in range(2000001)]
black = [0 for _ in range(2000001)]

start = 1000000

for _ in range(n):
    x, LR = input().split()
    x = int(x)
    if LR == 'R':
        for i in range(start - 1, start + x - 1):
            color[i] = 'B'
            black[i] += 1
        start += x
    else:
        for i in range(start - x - 1, start - 1):
            color[i] = 'W'
            white[i] += 1
        start -= x

white_cnt, black_cnt, gray_cnt = 0, 0, 0
for i in range(2000001):
    if white[i] >= 2 and black[i] >= 2:
        color[i] = 'G'

    if color[i] == 'W':
        white_cnt += 1
    elif color[i] == 'B':
        black_cnt += 1
    elif color[i] == 'G':
        gray_cnt += 1

print(white_cnt, black_cnt, gray_cnt)