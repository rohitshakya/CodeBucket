# 
#   Author : Kajal Shakya
#   Date   : Jan-2021
#   IDE	   : Python Idle 3.7
#   Time complexity : O(n)
#   Title : Perfect number
# 
n=int(input("enter a number:"))
sum=0
for i in range(1,n):
    if(n%i==0):
        sum=sum+i
if(sum==n):
    print(n,"is a perfect number")
else:
    print(n,"is not a perfect number")  
