a, b = map(int, input().split())
n = input()

decimal = 0

for elem in n:
    decimal = decimal * a + int(elem)

num = []

if decimal <= 1:
    print(decimal)
else:
    while not decimal < 1:
        num.append(decimal % b)
        decimal //= b

    print(*reversed(num), sep='')