k#synatx to create fun in python
#def function_name(): 
   #body
   #return 
def add():
    a = 3
    b = 4
    x = a+b
    print(x)
add() #calling function 

def addNo(q,w): #passing parameter in function 
    print(q+w)
addNo(4,6) 



def st(str):
    print(str,7)
    return
st("printing string through function ")

#pass by refernece 
def change(mylist):
    mylist.append([1,2,3,4])
    print("values inside function",mylist)
    #return keyword is not nessesary in python 

mylist = [10,12,13]

change(mylist) # it is pass by refernece since changes are also seen outside function 
print("values outside function",mylist) 


def myfun():
    print('hi')
    return 3+3 #NOTE IF WE WANT TO PRINT THE RETURN VALUE OF A FUN IN PYTHON WE CALL IT IN PRINT(FUN_NAME()) 
print(myfun())   

#types of arguments
#req arguments - it is also known as positional arguments in this we provide all the arguments which is req to run for the function , keyword arguments , default argumnets me 2nd paramter pahle bhi write = se  , variable length arguments me *variablename used when all paramter not known  
#1. req arguments are arguments passd to function in correct postional order 
#2. keyword arguments are related to function calls 





def calculate(num1, num2):
      return num1+num2, num1-num2
print(" ", calculate(10,20)) #print ke andhar func call , yes return statement execute 

def calculator(a,b):
    print(a+b)
    print(a-b)
    print(a*b)
    print(a//b)
    
calculator(4,2)

#eg of keyword argumnet
def keyword(first,last): 
    print(first,last)
keyword(last = "kumar",first = "adarsh")     #same word used in calling function 

def positionalandkeyword(a,b):
    print(a,b)
positionalandkeyword(a=3,b=6) 
#positionalandkeyword(b=4,6)    gives error , since postional (required) arguments has greater priotioy than keyword arguments 

def defaultfunc(strdefault="default string "):
    print(strdefault)
defaultfunc()
defaultfunc('argument given in default string')

def printinfo( arg1, *vartuple ):
    print("Output using variable length argument ")
    print (arg1)
    for var in vartuple:
        print(var) #loop used 
    
printinfo( 10 )
printinfo( 70, 60, 50 ) #variable parameter 



