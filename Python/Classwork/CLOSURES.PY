# def outer(message):
#     def inner():
#         print(message)
#     print(id(inner))
#     return inner
# c=outer("HI")
# c()
# print(id(c))

# def func_demo(n):
#     def func_sample(m):
#         return m/n
#     return func_sample
# c1=func_demo(5)
# c2=func_demo(8)
# print(c1(55))
# print(c2(64))

# l1=[1,2,3,4]
# print(l1)
# del(l1)
# print(l1)#del fn deletes teh entire thing

# def func_demo(n):
#     def func_sample(m):
#         return m/n
#     return func_sample
# c1=func_demo(5)
# del func_demo
# print(c1(55))

# def func1():
#     x=0
#     def func2():
#         nonlocal x
#         x=x+1
#         return x
#     return func2
# c=func1()
# print(c.__name__)
# print("The value of x is",c())
# print("The values of x is",c())


#------------------------------------------------------------------------------------------------------#
