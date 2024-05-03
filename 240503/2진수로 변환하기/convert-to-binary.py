n = int(input())
binary = []

if n < 1:
    print(0)
else:
    while not n < 1:
        binary.append(n % 2)
        n = n // 2

    binary.reverse()
    for elem in binary:
        print(elem, end='')