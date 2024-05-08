class Student:
    def __init__(self, name, h, w):
        self.name, self.h, self.w = name, h, w

n = int(input())
students = []
for _ in range(n):
    name, h, w = tuple(input().split())
    students.append(Student(name, int(h), int(w)))

students.sort(key = lambda s: s.h)

for elem in students:
    print(elem.name, elem.h, elem.w)