# 
#   Author : Kajal Shakya
#   Date   : Jan-2021
#   IDE	   : Python Idle 3.7
#   Time complexity : O(log n)
#   Title : Check whether a number is armstrong or not
#  
number=int(input("enter the number:"))
result=0
n=0
temp=number;
while(temp !=0):
    temp=int(temp/10)
    n=n+1
#checking if the number armstrong
temp=number
while(temp!=0):
     remainder=temp%10
     result=result+pow(remainder,n)
     temp=int(temp/10)
if(result==number):
    print("armstrong number")
else:
    print(" not a armstrong number")
    

