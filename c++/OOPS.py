#OOPS

#%%% 
#the class Person has 2 attributes - name and the method say_hi

#an object p is created by calling the class

#every method/func in the class passes the object as the first argument
#the object p is passed as the 1st arg to the say_hi method 

class Person:
    name = "abc"
    def say_hi(self):
        print("hello, my name is", self.name)
    
p = Person()
p.say_hi()

#Methods inside the class can be directly used too
Person.say_hi(p)


#%%%
# __init__ func is called whenever an object is created (its a dunder)

# the init func has the reference to the object (self means object) 

# the argument name is being accepted by init and name is being stored as an
# attribute of the object. so name need not be defined in the class 

#the name passed to the init method while initiating the object p will be
#stored as an attribute of that object by init

class Person :
    def __init__(self,name):
        self.name = name
    def say_hi(self):
        print("hello, my name is", self.name)
        
p = Person("xyz")
p.say_hi()

Person.say_hi(p)


#%%%
# Dunders or magic funcs - used for operator overloading

# init stores model and mileage info in the object's attributes

#__str__ is used to give string representation  

#__repr__ is used by print func to get the string and print it

# __eq__ takes the self obj and another obj and compares for equality,
#__add__ adds them both

class Car:
    def __init__(self,model,mileage):
        self.model= model
        self.mileage= mileage
        
    def __str__(self):
        print ("{} , {}".format(self.model, self.mileage))
    
    def __repr__(self):
        print ("{}".format(self.model))
        
    def __eq__(self, other):
        print (self.mileage == other.mileage)
        
    def __add__(self,other):
        print (self.mileage + other.mileage)
        
c1 = Car('a', 10)
c2 = Car('b', 20)

print (c1 + c2)
print (c1==c2)


#%%%       
## How attributes of a class is copied to an object

#when an object is created, all the attributes of the class is copied into 
#the object before the __init__ func is executed

class Car:
    mileage = 10
    def __init__(self, model):
        self.model = model
    
a = Car('honda')
print (a.mileage) #obj a has a mileage of 10 as defined in the class

b = Car('civic')
b.mileage = 20  #the attribute is specifically changed for this object
print (b.mileage)


class Dog:
    
    tricks = [] 
    def __init__(self, name):
        self.name = name
        
    def add_trick(self,trick):
        self.tricks.append(trick)
        
a = Dog('bruno')
#every trick added will get appended to the tricks list
a.add_trick('fetch')
a.add_trick('roll')
print (a.tricks)

b = Dog('max')
print (b.tricks)

#b also has the same tricks as a even though it wasnt appended for b
#this is because a list is mutable. that means the object b also points
#to the same memory for tricks

#immutable data strc like strings and tuples will create an alias rather 
#than point to the same memory address

#list can be used if tricks is defined in the init. a new list of tricks 
#will be created every time an object is initiated  

class Dog: 
    def __init__(self, name):
        self.name = name
        self.tricks=[]
        
    def add_trick(self,trick):
        self.tricks.append(trick)
        
a = Dog('bruno')
#every trick added will get appended to the tricks list
a.add_trick('fetch')
a.add_trick('roll')
print (a.tricks)

b = Dog('max')
print (b.tricks)


#%%%       
## Inheritance 
class Nig:
    def __init__(self, name, age):
        self.name = name
        self.age = age
        
    def tell(self):
        print("Name: {}  Age:{}".format(self.name, self.age), end= '  ')
        
    
class BigNig(Nig):  #The above class is inherited into this class
    def __init__(self, name, age, salary):
        
#super method calls init from super class and takes name and age
        super().__init__(name, age)  
        self.salary = salary
        
    def tell(self):
        super().tell()
        print("Salary: {}".format(self.salary))
        
class LilNig(Nig):
    def __init__(self, name, age, cred):
        super().__init__(name, age)
        self.cred = cred
        
    def tell(self):
        super().tell()
        print ("Cred: {}".format(self.cred))

a = BigNig ("abc", 40, 50000)
a.tell()
b = LilNig ("xyz", 15, 2000)   
b.tell() 
    
      
#%%%
# MRO (Method Resolution Order)

class A:
    x = 10
    
class B(A):
    pass

class C(A):
    x= 5

class D(C):
    x = 15
    
class E(B, D):
    pass

print (E.x)

# __mro__ gives the order in which methods & their attributes are traversed

print (E.__mro__)


#%%%
# Modules in Python 

# import module_name
# OR 
# import module_name  as custom_name  
# OR
# from module_name import (method_names,variables,etc)
# OR
# from module_name import (method_name as custom_name, etc)





        
    







