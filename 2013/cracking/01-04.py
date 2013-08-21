# coding=utf8
# Write a method to decide if two strings are anagrams or not.

def are_anagrams(str1, str2):
    len1 = len(str1)
    len2 = len(str2)
    
    buffer = [0] * 256
        
    for i in xrange(len1):
        c = ord(str1[i])
        buffer[c] = buffer[c] + 1
        
    for i in xrange(len2):
        c = ord(str2[i])
        buffer[c] = buffer[c] - 1
        if buffer[c] < 0:
            return False
            
    for i in xrange(len(buffer)):
        if buffer[i] != 0:
            return False
        
    return True
    
print "They are anagrams %s" % are_anagrams("mary", "army")