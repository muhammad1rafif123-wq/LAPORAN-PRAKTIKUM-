import math

a = float(input())
b = float(input())

base = math.sqrt(b * b - a * a)
height = a
perimeter = a + base + b
area = 0.5 * base * height

def fmt(n):
    return f"{n:.0f}" if n == int(n) else f"{n:.2f}"

print(f"base = {fmt(base)} cm")
print(f"height = {fmt(height)} cm")
print(f"perimeter = {fmt(perimeter)} cm")
print(f"area = {fmt(area)} cm^2")
