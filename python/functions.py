# list of some built-in functions
# abs()
number = -10
absolute_value = abs(number)
# print(absolute_value)  # оut: 10

# min()
# max()
numbers = [5, 2, 8, 1, 9]
min_value = min(numbers)
max_value = max(numbers)
# print(min_value, max_value)  # оut: 1 9

# round()
decimal_number = 3.14159
rounded_number = round(decimal_number, 2)
# print(rounded_number)  # оut: 3.14

# sum()
numbers = [1, 2, 3, 4, 5]
total_sum = sum(numbers)
# print(total_sum)  # оut: 15

# filter()
numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
even_numbers = list(filter(lambda x: x % 2 == 0, numbers))
# print(even_numbers)  # out: [2, 4, 6, 8, 10]

# map()
numbers = [1, 2, 3, 4, 5]
squared_numbers = list(map(lambda x: x**2, numbers))
# print(squared_numbers)  # out: [1, 4, 9, 16, 25]

# sorted()
numbers = [5, 2, 8, 1, 9]
sorted_numbers = sorted(numbers)
# print(sorted_numbers)  # out: [1, 2, 5, 8, 9]

# Ламбда функциите (или анонимни функции) в Python са малки функции, които могат да се дефинират в един ред код. Те се създават с помощта на ключовата дума lambda и често се използват, когато е нужно кратко и временно решение за функция в рамките на израз или при връщане на функция като резултат от друга функция.

# lambda arguments: expression
add = lambda x, y: x + y
print(add(3, 4))  # out: 7

# DECLARING FUNCTIONS
def print_text(text):
    print(text)
    
print_text('hello python')