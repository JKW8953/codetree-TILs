binary = input()

num = 0

for elem in binary:
    num = num * 2 + int(elem)

print(num)