class Student:
    def __init__(self, name, k, e, m):
        self.name, self.k, self.e, self.m = name, k, e, m

n = int(input())
students = []
for _ in range(n):
    name, k, e, m = input().split()
    students.append(Student(name, int(k), int(e), int(m)))

students.sort(key = lambda s: (-s.k, -s.e, -s.m))

for elem in students:
    print(elem.name, elem.k, elem.e, elem.m)