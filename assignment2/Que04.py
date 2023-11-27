# Write a Python function to find the maximum of three numbers

def max_num(a, b, c):
    if a > b & a > c:
        print(f"max = {a}")
    elif b > c:
        print(f"max = {b}")
    else:
        print(f"max = {c}")

num1 = int(input("Enter number1 : "))
num2 = int(input("Enter number2 : "))
num3 = int(input("Enter number3 : "))

max_num(num1, num2, num3)