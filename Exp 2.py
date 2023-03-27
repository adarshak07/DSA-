#palindrome no. 
a = 12321
reverse_num = str(a)[::-1] #::-1 is used to reverse order of string 

if str(a) == reverse_num:
    print(a,"is palidrome")
else:
    print(a,"not palindrome")   



#armstrong no.
num = 153
sum = 0
length = len(str(num))

temp = num
while temp > 0:
    digit = temp%10
    sum +=digit**length #no of digits is powered to the  digits in armstrong 
    temp//=10 

if num == sum:
    print(num,"is armstrong")
else:
    print(num,"not armstrong")

#greatest no. 
x = 12
y = 13
z = 14

if x>y and x>z:
    print(x,"is greatest")
elif y>x and y>z:
    print(y,"is greatest")
else:
    print(z,"is greatest")   


#print pattern using nested loop

row = int(input("enter no. of rows"))
for i in range(1,row+1): #upper bound is not included 
    for j in range(i): #har row me print i euqal to no. of i hee 
        print(i,end='')  # end ='' does not moves in next line 
    print()    

#another pattern 
for i in range(1,5):
    for j in range(i): #starts with 0 end with i-1 
        print('*',end='')
    print()
for k in range(5,0,-1): # decreasing for loop in python
    for m in range(k):
        print('*',end='')
    print()


#print odd number using continue and while loop 

for q in range(100):
    if q%2==0:
        continue
    print(q)  

