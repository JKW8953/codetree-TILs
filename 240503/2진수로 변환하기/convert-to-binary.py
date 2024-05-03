n = int(input())
binary = []

if n <= 1:
    print(n)
else:
    while not n < 1:
        binary.append(n % 2)
        n = n // 2

    binary.reverse()
    for elem in binary:
        print(elem, end='')