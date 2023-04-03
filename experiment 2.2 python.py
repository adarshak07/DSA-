

l1 =[10,3,3,5,6]  #list is ordered and changeable
print(l1) # duplicate value can take
#list can take any type of value 
#print(l1[3])
print(l1[:4]) 
print(l1[-3:]) #slicing also used in list like string 

print(len(l1))  
print(min(l1))
print(max(l1))

print(4 in l1)

l2=[4,5,2,4]
l3=l1+l2 #concate 2 list 
print(l3)

print(l2*3) 

print(l1.count(3))

#append all lements of l2 in l1 
l1.extend(l2)
print(l1)

print(l1.index(4)) #gives index of fisrst occuranvce 

l1.insert(2,1000) #inserting a elemny at a given index 
print(l1)

l1.remove(3) #removes frist occurnece of that element , 3 is the element value 
print(l1)

l1.reverse()
print(l1)

l1.sort()
print(l1)

l1.pop() #removes last element 
print(l1)

l1.pop(3) #removes third index value using pop 
print(l1)

#del l1 #whole list is deleted

del l1[0]  #removes oth index element using del 
print(l1)

l1.clear()  #clear removes all elements of the list but the list is nt deleted 
print(l1)





