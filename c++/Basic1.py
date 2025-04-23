#BASICS, FUNCTIONS, BUILT-IN DATA STRUCTURES

#%%
##input
a= input()
print ("""This 
is a multiline print statement
a""")
#%%


#%%
##split
a = "1 2 3 4 5"
print (a)
print (type(a))

a = "1 2 3 4 5".split()
print(a)
print (type(a))
#%%


#%%
##hasmaps/dictionary
dict = {
        1:"a",
        2:"b",
        3:"c"
        }
print (dict[2])
#%%


#%%
##function and for loop
def func(n):
    for i in n:
        if dict.get(i) is None:
            print ("Not found")
        else:
            print (dict[i])
    return 

num= [int(x) for x in input().split()]
func(num)
#%%


#%%
## Args and Kwargs
## *args takes tuples as input 
## **kwargs_name takes dictionary as input

def show (*args,**kwargs):
    print (args,kwargs)
    
show (1,2,3,a=4,b=5)
#%%


#%%
## Inflation of tuples in input
def temp (*args):
    print (args)
    return 
    
a=(1,2,3)
temp(a)
temp(*a)
#%%


#%%
##Lambda functions - one line funcs
def addition(a,b):
    return a+b

addition2 = lambda a,b: a+b  ##same func written as lambda func
print (addition2(5,3))

#sorted operation will sort alphabetically. 'key' is used for custom sort
#here sort is based on 1st index of tuple, i.e, the numbers
a  = [("a",10),("b",1),("c",5)]

def key(x):
    return x[1]
print (sorted (a, key = key) )

print (sorted (a, key = lambda x: x[1]))
#%%  



#%%
##Reusing code in multiple functions
users = {             #dictionary for usernames and corresponding passwords
         "name1": "password",
         "name2": "password"
         }

def login_required (func):  #this func takes another func as input
    def wrapper (username,password,*args,**kwargs): #this func passes args to above input funt
        if username in users and users[username] == password:
            func(*args,**kwargs)
        else:
            print ("Wrong username or password")
            
        return wrapper
    
def adding(a,b):    #passing add through login_required for access
     print (a+b)


protected_adding = login_required (adding)

@login_required  #same as above but using DECORATOR 
def add(a,b):
    print (a+b)

print (type(protected_adding))
#%%

#%%
##Datastructures 
#Strings
print (ord('a')) #ASCII value
print (chr(65) ) #Charcter corresponding to ASCII value

#String Operations
a = "number"
b = 1
c = "nigga"
print ("print digits using %d" %b)
print ("{} {} {}".format(a,b,c))
print ("{2} {1} {0}".format(a,b,c)) #change order of strings printed
print ("{firstname} {lastname}".format(firstname = "abc", lastname ="xyz"))

fname = "abc"
lname = "xyz"
print (f"{fname} {lname}")  #f is fetch which fetches variables 

a = "1 2 3 4 5"
print (a)
print (a.split()) 

print (c.replace('g','b'))
print (c.count('g'))
#%%


#%%
##Lists operations (works with strings too)
a = [1,2,3,4]
b = [5,6,'a','b']
print (len(a))   #length of list
print (a+b)      #concatenate lists
print (1 in a)

for i in a:
    print (i)
    
#indexing
print (b[-1])    #backwards indexing - prints last element

print (b[1:4])   #range - lower limit inclusive, upper limit exclusive
print (b[0:5:2]) #slicing - prints every 2nd element after 0th index  

x="12345"
print (x[::-1], a[::-1])  #EASIEST WAY TO REVERSE A STRING OR LIST

#checking for palindrome 
pal = "racecar"
print (pal == pal[::-1])

#List operations
#adding items 
a.insert(1,'inserted at 1st index')
print (a)
a.append('appends at end')
print(a)

#deleting items
a.pop(5)        #removes 5th index elem
print (a)
a.remove(1)   #removes element with value '1'
print (a)

#sorting and reversing
a = [5, 4, 1, 2, 9]
b = [1, 2, 3, 4, 5]
print (sorted(a))  #sorted func doesnt return any value or change the list 
print (a)

a.sort()           #this modifies the list  
print (a)

for i in reversed(b):  #doesnt modify the list
    print (i)
    
b.reverse()         #modifies the list
print (b)
#%%


#%%
##Tuples
a = [1, 2, 3]
a[0] = 5      #lists are mutable but tuples are not
print (a)    
b = (1, 2, 3) #b[0] value cant be changed once declared (immutable)

a = 1, 2, 3   #elements separated by comma is considered as tuple
b = 'a', 'b', 'c'

c, d, e = a   #tuple values get unpacked into variables
print (c,d,e)

#Swapping values between variables
a = 5
b = 10
a, b = b, a
print (a,b)
#%%


#%%
#Converting data types
a = (1, 2, 3, 4)    #tuple
a = list(a)
print (a)

a = "string"
a = list(a)
print(a)
#%%


#%%
## Returning multiple values from a function using tuples
def addsum(a,b):
    return a+b,a-b

sum, diff = addsum (5,2)
print (sum,"\n",diff) 
#%%


#%%
## Dictionary operations
dict = {
        "name": ["a","b","c"],
        "age" : 21,
        "nigga" : ("real", "fake")
        }

for i in dict :    #prints all the keys in the dictionary
    print (i)
    
for i in dict.values():  #values() accesses the values associated to keys
    print (i)
    
for key, value in dict.items(): #items() accesses both keys & their values
    print (key, "-", value)
#%%


#%%
## Sets

a = {1,2,3,4}
b = {5,1,7,2}

print (a.intersection(b))   #Intersection of two sets
print (a.union(b))      #union of set a and set b
print (a-b)     #values in set a not in set b

# Removing duplicates from lists using sets

a = [1,2,3,1,3]
a = set(a)   # Sets cant contain duplicates
a = list(a)
print (a)
#%%


#%%
##Comprehension of data structures (creating list,set,dict together)

a = []   #Empty list 
for i in range(10):
    if i % 2 ==0:
        a.append(i**2)   #Squaring even elements from 0-10
print (a)   

#list comprehension for the same loop
b= [i**2 for i in range(10) if i % 2 == 0]
print (b)

#dict comprehension
c= {i: i**2 for i in range(10) if i % 2 == 0}
print (c)

#set comprehension
d= {i**2 for i in range(10) if i % 2 == 0}  
print (d)    
#%%

