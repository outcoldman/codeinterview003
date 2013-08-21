# coding=utf8
# Implement an algorithm to determine if a string has all unique characters. What if you can not use additional data structures?
def check_for_unique(value):
    "Determine if string has all unique characters"
    count = [False] * 256
    for c in value:
        index = ord(c) 

        if count[index] == True:
            return False
            
        count[index] = True
        
    return True;
        
print "This string 'Hello' is unique: %s" % check_for_unique("Hello")
print "This string 'Helo' is unique: %s" % check_for_unique("Helo")