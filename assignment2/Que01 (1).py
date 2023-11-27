# Write a function to return simple interest

def simple_interest(p, r, t):
    return (p*r*t)/100

p = int(input("Enter principle value : "))
r = int(input("Enter rate value : "))
t = int(input("Enter time period : "))

si = simple_interest(p, r, t)
print(f"Simple Interest = {si}")