result=lambda x,y:x+y
print(result)
print(result(3,4))

result2=lambda n:n*n
print(result2(3))

result3 = lambda a,b : a if a>b else b
print("MAx no is ",result3(100,50))

result4 = lambda a,b,c : (a if (a>b and a>c) else (b if b>c else c))
print(" max no is : ",result4(100,200,99))


#Suppose we have a function definition that takes one argument, and that argument will be multiplied with an unknown number.
def samplefunc(n):
    return lambda x:x*n
result5=samplefunc(3)
print("result = ",result5(3))



#map function:
def prod(x,y):
    return x*y
l10=[2,3,4,5,6]
l11=[7,8,9,2,1]
# result=list(map(lambda x,y:x*y,l10,l11))
result = list(map(prod,l10,l11))
print(result)



l11=[1,2,3,4,3,2,1,5,6]
def myfunc(x):
    if x%2==0:
        return 2*x
    else:
        return x
result=set(map(myfunc,l11)) #set removed duplicate elements
print(result)


#filter function:
l1=[18,45,45,34,98,12,5,17,14,31,15]
def elitovote(x):
    if x>= 18:
        return True
    else:
        return False
result=list(filter(elitovote,l1))
print(result)


#function that filter vowels:
characters = ['h', 'e', 'l', 'l', 'o', 'w', 'o', 'r','l','d']
v=["a","e","i","o","u"]
def vowel(x):
    if x in v:
        return True
    else:
        return False
result = list(filter(vowel,characters))

print(result)


# filter odd even nos from lsit:
l1=[2,3,4,5,6,7,8,9,10]
def even(x):
    if x%2==0:
        return True
    else:
        return False
result=list(filter(even,l1))
print(result)


#reduce function:
from functools import reduce
n=5
print("the factorial of 5 is : ",reduce(int.__mul__,range(1,n+1)))


