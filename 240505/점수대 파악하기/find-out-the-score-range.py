arr = list(map(int, input().split()))

score = [0 for _ in range(10)]

for elem in arr:
    if elem == 0:
        break
    score[(elem // 10) - 1] += 1

score.reverse()

tmp = 100
for i in range(10):
    print(f"{tmp} - {score[i]}")
    tmp -= 10