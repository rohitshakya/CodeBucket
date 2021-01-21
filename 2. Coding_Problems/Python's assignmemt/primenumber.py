# 
#   Author : Kajal Shakya
#   Date   : Jan-2021
#   IDE	   : Python Idle 3.7
#   Time complexity : O(n)
#   Title : Prime number
# 
num=int(input("enter a number:"))
#check for factors
flag=True
for i in range(2,num):
    if(num%i)==0:
        flag=False
        break
if(flag):
    print(num,"is a prime number")
else:
    print(num,"is not a prime number")
