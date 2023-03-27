str = "adaada"
rev = ''.join(reversed(str))  #inbuild fun in python to reverse string 
if (str == rev):
    print("string is palindrome")
else:
    print("string is not palindrome")   






'''a ="adaadaa"
length = 6
first=a[:3]
second=a[-3:]
revsec=''.join(reversed(second))
print(first)
print(revsec)
if(first == second):
    print("a is palindrome")
else:
    print("not palindrome") 

print(a)'''

 

#find uncommon word from two string
str1="hi there"
str2="hi ok"
a=str1.split() #return list , array imm 

for i in a:
    if(i not in str2):
        print(i)

b=str2.split()  #NOTE , SPLIT() , BREAKS COLLECTIONS OF WORDS OR SENTENCE INTO DIFF INDEPEDENT WORDS IN ARRAY 
                 #NOTE, IF SPLIT('A') , ARGUMENT PASSES TO USKE PAHLE AGAL , BAAD AGAL , IN THAT WORD SO BOTH WAYS USE 
for j in b: 
    if(j not in str1):
        print(j)


string="food"
length = len(string)
if(length>3):
    print(string+"ing")
    



