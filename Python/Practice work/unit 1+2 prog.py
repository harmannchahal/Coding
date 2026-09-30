

'''----------------------------------------------------------------------------Week 3---------------------------------------------'''

# # Given two integers a and b as input, calculate the square root of their sum using 
# # the math module. Output the result rounded to two decimal places.
# import math
# a=int(input("enter an int"))
# b=int(input("enter another int"))
# c=(math.sqrt(a+b))
# print(c,"{:.2f}".format(c))

# # Write a Python program to input a person’s date of birth (year, month, day) as 
# # integers and calculate the total number of days they have lived until today’s date 
# # (September 7, 2025). Use the datetime library to handle date calculations and 
# # compute the difference between the current date and the birth date. Output the 
# # total number of days lived.
# from datetime import datetime
# y=int(input("Enter the year"))
# m=int(input("enter monnth"))
# d=int(input("enter date"))
# dob=datetime(y,m,d)
# today=datetime.now()
# day_live=(today-dob).days
# print("number of days you have liives are : ",day_live)

#baki prog are easy of week 3 you can do that by yourself only!!!


''' ------------------------------------------------------------- Week 4 ------------------------------------------------------------------'''

# # # Given an integer n, print numbers from 1 to n.  
# # # However, for multiples of three, print "Fizz" instead of the number. 
# # # For multiples of five, print "Buzz".  
# # # For numbers which are multiples of both three and five, print "FizzBuzz".
# n=int(input("number : "))
# for i in range(1,n+1):
#     if(i%3==0 and i%5==0):
#         print("FizzBuzz")
#     elif(i%3==0):
#         print("Fizz")
#     elif(i&5==0):
#         print("Buzz")
#     else:
#         print(i)

#rev of a no keeping sign reserved:
# n=int(input("number:"))
# if(n<0):
#     sign=-1
# else:
#     sign=1
# rev=0
# temp=n
# while(temp!=0):
#     r=temp%10
#     rev=rev*10+r
#     temp=temp//10
#     rev*=sign
# print("rev = ",rev)

# # Given an integer n, determine if it is a power of two. An integer is a power of two 
# # if there exists an integer x such that n == 2^x. 
# n=int(input("number"))
# if n<=0:
#     print(n,"is not a power of 2")
# else:
#     while n%2==0:
#         n=n//2
# if(n==1):
#     print("it is a power of 2")
# else:
#     print("it is not a power of 2")

#------------------------------------------------------------------WEEK 5-------------------------------------------------------------
'''Given a list of integers nums and an integer target, find the indices of the two numbers such 
that they add up to target. 
Example: 
nums = [2, 7, 11, 15] 
target = 9 
Output: [0,1]''' 

# nums=[2,7,11,15]
# target=9
# l1=[]
# for i in range(len(nums)):
#     for j in range(i+1,len(nums)):
#         if (nums[i]+nums[j]==target):
#             l1.append(i)
#             l1.append(j)
# if l1:
#     print(l1)
# else:
#     print("no such value")


'''A teacher has two equal groups of students. The first group is seated in the first half of a 
row, and the second group in the second half of the row. The teacher now wants to 
rearrange the seating so that students from both groups sit alternately. 
Write a Python program to read the roll numbers of 2n students (entered in a single line 
separated by spaces) and rearrange them in an alternating order. 
• The first n roll numbers represent Group A. 
• The next n roll numbers represent Group B. 
• The output should display the new arrangement as [A1, B1, A2, B2, …, An, Bn]. 
Enter roll numbers separated by space: 101 102 103 201 202 203 
Enter n: 3 
Output: [101, 201, 102, 202, 103, 203] '''
roll=eval(input("enter roll numbers separated by spaces: "))
n=int(input("enter n : "))
l1=[]
l1=roll
print(l1)