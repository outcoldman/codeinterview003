# coding=utf8
# Write code to reverse a C-Style String. (C-String means that "abcd" is represented as five characters, including the null character.)

def reverse_string(str):
    buffer = list(str)
    length = len(buffer)
    for i in xrange(length / 2):
        t = buffer[i]
        buffer[i] = str[length - i - 1]
        buffer[length - i - 1] = t
    return "".join(buffer)

print "Result %s" % reverse_string("abcde")
