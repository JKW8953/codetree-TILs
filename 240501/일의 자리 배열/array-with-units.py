a, b = map(int, input().split())
print(a, b, end = ' ')
for i in range (3, 11):
    print ((a + b) % 10, end = ' ')
    a, b = b, (a + b) % 10