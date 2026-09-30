# print(10,12,14,end=" ");print(16,18)

# print(1,2,3,4,5,6,sep="*")
# print(90+12%14)
# print("happy birthday")

# a=10
# b=10
# print(id(a))
# print(id(b))#id of variables are same as they are immutable

# marks=input("enter marks in maths and science")
# marks=marks.split()
# print(marks)

# #to check if one no is div with secod no or not
# a=int(input("enter a number"))
# b=int(input("wnter another no"))
# if(a%b==0):
#     print(a,"is divisible with",b)
# else:
#     print(a,"is not divisible with",b)

#to checkif no is positive or neg
# a=int(input("enter a valid number"))
# if(a==0):
#     print("enter a valid no")
# elif(a>=0):
#     print(a,"is a pos no")
# else:
#     print(a,"is a neg no")

'''#take operants as well as operators from user and perform calc:
a=int(input("enter a no"))
b=int(input("enter another no"))
op=input("enter + , - , * , / ")
if(op == +):
    print(a+b)
elif(op==-):
    if()
    print(a-b)
elif(op==*):
    print(a*b)
elif:
    print(a/b)
else:
    print("invalid operator")'''

# #to print sum of natural nos
# n=int(input("enter value of n"))
# sum=0
# for i in range(1,n+1):
#     sum+=i
# print(sum)

# #to check if no is prime or not
# a=int(input("enter a number"))
# for i in range(2,a):
#     if(a%i==0):
#         continue
#     else:
#       print(a,"is a prime no")
#       break

# #to find sum of first n nat nos
# n=int(input("enter value of n"))
# sum=0
# for i in range(1,n+1):
#     sum+=i
# print(sum)

# #multiplication table
# n=int(input("enter a number"))
# for i in range(0,11):
#      print(n,"*",i,"=",n*i)

# #to find rev of a no
# n=int(input("enter a no"))
# if(n<=0):
#     print("enter a valid postive no")
# rev=0
# temp=n
# while(temp!=0):
#     r=temp%10
#     rev=rev*10+r
#     temp=temp//10
# print("the rev of a no is :",rev)

# #to check if no is perfect or not
# n=int(input("enter a no"))
# sum=0
# for i in range(1,n):
#     if(n%i==0):
#         sum+=i
#     else:
#         continue
# if(sum==n):
#     print("it is a perfect square")
# else:
#     print("not a perfect square")

# #to find factorial of a no:
# n=int(input("enter a no"))
# pro=1
# for i in range(1,n+1):
#     pro=pro*i
# print(pro)

# #fibnocci series
# n=int(input("enter value of n"))
# a=0
# b=1
# while(a<=n):
#     print(a,end=" ")
#     a,b=b,a+b

# #prime nos in range(30-50)
# for i in range(30,50):
#     for j in range(2,i):
#         if i%j==0:
#             break
#     else:
#         print(i,end=" ")


#----------------------------------------LIST-------------------------------------------------#


# #palindrome in list or not
# l1=[]
# l2=[]
# n=eval(input("enter the numbers for a list"))
# for i in range(0,n):
#     l1.append(i)
# l2.append(l1[-1:])
# if l1==l2:
#     print("it is a palindrome")

# numbers=[55,88,45,12]
# for i in numbers:
#     print(i, end =' ')

# number=[10,20,30,40,50]
# i=0
# while(i<len(number)):
#     print(number[i],end='') 
#     i=i+1

'''lst1 = [12,44,55,89,11,24]
lst2 = lst1[::] #to copy the list
print(lst1)
print(lst2)
print(id(lst1))
print(id(lst2))  #The list will have diff ids'''

# lst1 = [12,44,55,89,11,24]
# lst2=lst1
# print(id(lst1),id(lst2)) #list will have same ids when assignes a list to another list but willlhave diff ids if copes the lists

# l1=[23,55,43,5,6,76,78,89,36]
# l1.extend((36,))
# print(l1)

# #tuple
# t1=(12,23,34,45,56,"pes","university")
# print(t1+(4,))

# d1={"1":"12","2":"13","3":"14"}
# print(sum(d1))

# d1={"1":10,2:20,"r":5}
# print(max(d1))

# d1=[1,2,3,4,30]
# d2=[4,40,5,50]
# print(d1+d2)

# print(eval(“2+4-1”))

# lst2=['z', 'a', 'pes']
# l3=lst2[:3:].sort()
# print(l3)

# l1=[10,20,50,60,70]
# l2=[25,60,82,92,100]
# l3=[]
# for i in range(len(l1)):
#     l3.append(l1[i]+l2[i])
# print(l3)

# s1 = """here is an
# ... example for
# ... splittling"""
# print(s1.splitlines())

# def f1():
#  print("in f1")
#  return f2()
# def f2:
#  print("in f2")
# printf1()

# def f1():
#     x=12
#     print(x)
# f1()
# global()
# x=x+1
# print(x)

# n=int(input("enter any no:"))
# for i in range(2,n):
#     if(n%i==0):
#           print("it is not prime")
#           else:`print("it is a prime no")

# d1={"a":"apple","b":"ball","c":"cat"}
# for k,v in d1.items():
#     print(k,v)

#recursion
#print all nos from 1-4
# def numbers(n):
#     if n==5:
#         return 1
#     print(n)
#     numbers(n+1)
# numbers(1)


# # Compute the GCD of two numbers using recursion. 
# def gcd(a,b):
#     if a==b:
#         return a
#     elif a>b:
#         return gcd(a-b,b)
#     else:
#         return gcd(a,b-a)
# print(gcd(3,4))


# # Generate Fibonacci Series upto n_terms using recursion
# def fib(n):
#     if n==1:
#         return 1
#     else:
#         return fib(n-1)+n
# print(fib(5))


import numpy as np
# a=np.array([2,3,4,5,6,7])
# print(a)

# b=np.zeros((3,3))
# print(b)

# b=np.array([[0,0 ,0],[0,0,0],[0,0,0]])
# print(b)

# c=np.ones((3,3))
# print(c)

# d=np.arange(9)
# print(d)
# e=d[0:5]
# print(e)
# f=d.reshape(3,3)
# print(f)

# a=np.array([3,4,5,6,7])
# b=np.array([2,1,3,8,6])
# c=np.concatenate((a,b))
# print(c)
# print(a+b)
# print(np.sort(b))
# e=np.prod(a)
# print(e)
# print(c[c<4])

#----------------PILLOW---------------------
# from PIL import Image
# i=Image.open("C:\\Users\\LENOVO\\Pictures\\Screenshots\\Screenshot 2025-11-12 102837.png")
# i.show()
# print(i.format)
# print(i.size)
# print(i.mode)
# a=i.resize((300,450))
# a.show()
# b=i.thumbnail((300,450))
# print(i.size)  #changes in the original picture
# i.show()
# c=i.convert("L")
# c.show()
# i.save("C:\\Users\\LENOVO\\Pictures\\randoms\\Screenshot.png")
# print("Image saved sucessfully")


#-------------------NTLK---------------------------
#   Splitting text into words or sentences (tokenization).
# • Filtering out common words (e.g., "the", "is").
# • Counting word occurrences to find key themes.

#   Word Tokenization: Splits text into words and punctuation.
# • Sentence Tokenization: Splits text into sentences.

# #tokenize
# import nltk
# from nltk.tokenize import word_tokenize
# a="Harman is my name. Doing Python is my Game. I study in PES university. Although  it is not a very good university, yet i am studying in it."
# b= word_tokenize(a)
# print(b)

# import nltk
# from nltk.tokenize import sent_tokenize
# a="Harman is my name. Doing Python is my Game. I study in PES university. Although  it is not a very good university, yet i am studying in it."
# b= sent_tokenize(a)
# # print(b)


# #remove extra words (stop words)
# from nltk.corpus import stopwords
# from nltk.tokenize import word_tokenize
# stopwordss=set(stopwords.words('english'))
# text="Harman is my name. Doing Python is my Game. I study in PES university. Although  it is not a very good university, yet i am studying in it."
# words=word_tokenize(text)
# # print(words)
# l1=[]
# for i in words:
#     if i.lower() not in stopwordss:
#         l1.append(i)
# print(l1)


def lcm_rec(a, b):
    m=0
    m = max(a, b)
    if m % a == 0 and m % b == 0:
        return m
    return lcm_rec(a, b, m + 1)

