# coding=utf8
# Write a method to replace all spaces in a string with ‘%20’.

def encode(str):

  buffer = list(str)
  l = len(buffer)

  for i in xrange(l):
    if buffer[i] == ' ':
      buffer[i] = '%'
      buffer.insert(i + 1, '20')
      i = i + 2

  return "".join(buffer)

print 'Encoded string %s' % encode('Hello world!')