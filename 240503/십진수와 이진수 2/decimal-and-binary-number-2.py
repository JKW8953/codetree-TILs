binary = input()

decimal = 0

for elem in binary:
    decimal = decimal * 2 + int(elem)

decimal *= 17

re_binary = []

while True:
    if decimal < 2:
        re_binary.append(decimal)
        break
    re_binary.append(decimal % 2)
    decimal  = decimal // 2

for i in re_binary[::-1]:
    print(i, end='')