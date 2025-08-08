number = int(input("Enter a 3-digit number: "))
a = number // 100
b = (number // 10) % 10
c = number % 10
sum_of_digits = a + b + c
print("Sum of the digits:", sum_of_digits)