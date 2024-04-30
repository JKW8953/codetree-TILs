n = int(input())
cnt = 0
K = 1
while cnt < 2:
    if (n * K) % 5 == 0:
        cnt += 1
    print(n * K, end=' ')
    K += 1