class Person:
    def __init__(Person, name, addr, city):
        Person.name = name
        Person.addr = addr
        Person.city = city

People = []
n = int(input())
for i in range(n):
    name, addr, city = input().split()
    People.append(Person(name, addr, city))

idx = 0
for i in range(n - 1):
    if People[idx].name < People[i + 1].name:
        idx = i + 1

print(f"name {People[idx].name}")
print(f"addr {People[idx].addr}")
print(f"city {People[idx].city}")