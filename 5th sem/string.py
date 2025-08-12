#creating string
string1 = "hello"
string2 = "world"

#printing string
print("String 1:", string1)
print("String 2:", string2)

#concatenating the string -- means adding two different string into one string
concatenate_strings = string1 + " " + string2

#printimg the concatenated string
print("Concatenated string:", concatenate_strings)
 
#here we use the concept of sciling index syntax for slicing  = [start:end:step] -- where start is inclusive and end is exclusive anmd step is the increment
print(string1[0:1])  
print(string1[0:2])
print(string1[0:3])
print(string1[0:20:5])
print(string1[2:5])

#negative indexing in python
print(string1[-1]) #last Character Of the string
print(string1[-2]) #second last character of the string
print(string1[-3]) #third last character of the string
print(string1[-4]) #fourth last character of the string
print(string1[-5]) #fifth last character of the string

