#add mul two nos using callback:
# def domath(a,b,func):
#     print(a,b)
#     func(a,b)
# def add(a,b):
#     print(a+b)
# def multiply(a,b):
#     print (a*b)
# domath(1,3,add)


# #sort list based on the second digit:

# def sortlist(li):
#     return int(str(li)[1])

# li = [23,909,91, 56,27]
# print(li)
# li.sort(key=sortlist)
# print(li)

def extract_second_digit(x):
 return int(str(x)[1])
# def product(x):
#  return int(str(x)[0])* int(str(x)[1])
li = [23,909,91,56,27]
print("list before sorting",li)
print("minimum element based on 2nd digit is", min(li,key = extract_second_digit))