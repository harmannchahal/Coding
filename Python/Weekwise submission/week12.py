'''Write a function process_data(data_list, callback) that takes a list of numbers and a 
callback function. This function should iterate through each element in the list, apply 
the callback function to the element, and print the result. 
Create two separate callback functions: 
1. square_num(n): Returns the square of n. 
2. double_num(n): Returns n multiplied by 2. 
Demonstrate process_data using both callback functions on the list [1, 5, 9, 12]. '''

# def square_num(n):
#     return n * n

# def double_num(n):
#     return n * 2

# def process_data(data_list, callback):
#     print(f"Function name:{callback.__name__}")
#     for item in data_list:
#         processed = callback(item)
#         print(f"Original: {item}, Processed: {processed}")
#     print("-" * 30)

# numbers = [1, 5, 9, 12]

# process_data(numbers, square_num)
# process_data(numbers, double_num)



'''Write a function custom_sort(items, key_callback) that sorts a given list items based 
on the value returned by the key_callback. 
You are given a list of tuples, where each tuple contains (item_name, price, quantity). 
store_items = [('apple', 0.5, 10), ('banana', 0.2, 20), ('cherry', 2.0, 5), ('date', 1.5, 
8)] 
Demonstrate your custom_sort function by sorting this list based on two different 
criteria: 
1. By price (lowest to highest). 
2. By quantity (highest to lowest).'''


def custom_sort(items, key_callback):
    return sorted(items, key=key_callback)

def sort_by_price(item):
    return item[1]

def sort_by_quantity_desc(item):
    return -item[2]

store_items = [
    ('apple', 2000, 10),
    ('banana', 5000, 20),
    ('cherry', 1500, 5),
    ('date', 3500, 8)
]

print("Original list:")
print(store_items)

print("\nSorted by price (low to high):")
print(custom_sort(store_items, sort_by_price))

print("\nSorted by quantity (high to low):")
print(custom_sort(store_items, sort_by_quantity_desc))


'''Write a function make_power_of(n) that takes an exponent n. This function should 
return another function (a closure). The returned function should take a single 
argument x and return x raised to the power of n. 
 
Demonstrate this by creating a squarer (power of 2) and a cuber (power of 3) and 
testing them with the number 4.'''

# def make_power_of(n):
#     def power(x):
#         return x ** n
#     return power

# # making squarer and cuber
# squarer = make_power_of(2)
# cuber = make_power_of(3)

# # testing
# print("4 squared is:", squarer(4))
# print("4 cubed is:", cuber(4))
# print("10 squared is:", squarer(10))



'''Write a function create_counter(start_value) that takes an integer start_value.  
It should return a new function (a closure) that, when called, returns the 
start_value on its first call, start_value + 1 on its second call, start_value + 2 on 
its third call, and so on. 
Each counter created must be independent. Demonstrate this by creating two 
counters, counter_A starting at 10 and counter_B starting at 0, and calling them 
multiple times.'''

# def create_counter(start_value):
#     current = start_value
#     def counter():
#         nonlocal current
#         val = current
#         current += 1
#         return val
#     return counter

# counter_A = create_counter(10)
# counter_B = create_counter(0)

# print("--- Counter A ---")
# print(counter_A())
# print(counter_A())
# print(counter_A())

# print("--- Counter B ---")
# print(counter_B())
# print(counter_B())

# print("--- Counter A (Again) ---")
# print(counter_A())



'''Write a decorator that measures and prints the execution time of any function'''

# import time

# def timer_decorator(func):
#     def wrapper():
#         start = time.time()
#         print("start time:", start)

#         result = func()

#         end = time.time()
#         print("End time:", end)
#         print("Execution Time:", round(end - start, 4), "seconds")
#         return result
#     return wrapper

# @timer_decorator
# def greet():
#     print("Hello, welcome to Python Decorators!")
#     time.sleep(1)   # just to show time difference

# greet()


'''Write a Python program using a decorator that converts the output string of a 
function to uppercase. The function should accept a person’s name as input 
and return a greeting message in the format:   
"Hello <name>, good morning!" 
Use the decorator to automatically convert this greeting message to uppercase 
before displaying it. 
'''
# def to_uppercase(func):
#     def wrapper(name):
#         result = func(name)
#         return result.upper()
#     return wrapper

# @to_uppercase
# def greet(name):
#     return f"Hello {name}, good morning!"

# print(greet("PES University"))

