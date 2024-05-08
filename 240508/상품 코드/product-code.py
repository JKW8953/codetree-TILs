class Product:
    def __init__(self, name, code):
        self.name = name
        self.code = code

    def pro_print(self):
        print(f"product {self.code} is {self.name}")
        
name, code = input().split()

pro1 = Product("codetree", "50")
pro2 = Product(name, code)
pro1.pro_print()
pro2.pro_print()