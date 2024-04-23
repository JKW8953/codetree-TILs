class Product:
    def __init__(Product, name, code):
        Product.name = name
        Product.code = code

Product1 = Product('codetree', 50)
name2, code2 = input().split()
Product2 = Product(name2, code2)
print(f"product {Product1.code} is {Product1.name}")
print(f"product {Product2.code} is {Product2.name}")