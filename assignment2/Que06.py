# Write a Python function to calculate the factorial of a number (a non-negative 
# integer). The function accepts the number as an argument


def factorial(n):
    fact = 1
    i = 1
    while i <= n:
        fact = fact * i
        i = i + 1
    return fact

num = int(input("Enter a number : "))

f = factorial(num)

print(f"Factorial of {num} = {f}")
