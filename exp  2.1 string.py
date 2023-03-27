#compare 2 strings , differnet operators 
#join 2 or more strings 
#slice string 
#iterate through a string 
# string membership test ie chekc in 
#various inbuild function - string length , upper , lower , replace , find , 


a = "adarsh kumar" 
print(a) 
print(a[0])
print(a[-1])

#string treated same as arrays so loop through for simple 
for i in a:
    print(i)

#strings are immutable 
a = "newvalue"
print(a)
#a[1] = "q" #will give error 
#print(a)

#string slicing - ie we can access a part or group of string 
print(a[1:4]) #staring index is 1 and is included and ending index is not including 

print(a[:2])
print(a[3:])
#print(a[-2:-4])
print(a[-4:])

#inbuild functions in string
print(len(a))
print(min(a))  #min acissai value 
print(max(a))
print(a.replace('new','ada')) #replacig with other char or string , (does not change actual string)

print(a.split('va')) #split string in lists , va passed ie va ke pahle agal , baad agal , va deleted 

print(a.upper()) #upper method , in build only 

char = 'b'
print(ord(char)) #gives accai value of that particular character only 

#print(chr(char))

#compare string using relational operators 
print("valuee" in a) #check if present to true 
print("hey" == "hey there")
print("hi" != "hi")
print("oka" >= "ok") 
print("ady" < "ada") 

#concate strings

x = "hi ok"
y = "{1} there {0}" #index given so that o pahla argument 
z = x+" "+y #through + , can add any no. of strings 
print(z)

#print(x+34)  give error 

ok = 0        #{0,1} feel 
print(y.format(45,ok)) #format used to concat string and number into one  , but we have to give {} in the string it will add there 

print(y.find('here'))
print(y.find('hre'))  #if not present return - 1

#string conversion 
print(x.title()) #converts first char of each word  into capital 

print(x.capitalize()) #frist word only , makes all other in small 


print(x.upper())  #all in upper















