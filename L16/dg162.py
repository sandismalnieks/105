Python 3.6.8 (default, Jan 14 2019, 11:02:34) 
[GCC 8.0.1 20180414 (experimental) [trunk revision 259383]] on linux
Type "help", "copyright", "credits" or "license()" for more information.
>>> v0 = 0
>>> t = 0.1
>>> y = v0*t - 0.5*g*t**2
Traceback (most recent call last):
  File "<pyshell#2>", line 1, in <module>
    y = v0*t - 0.5*g*t**2
NameError: name 'g' is not defined
>>> g = 9.81
>>> y = v0*t - 0.5*g*t**2
>>> print y
SyntaxError: Missing parentheses in call to 'print'. Did you mean print(y)?
>>> print (y)
-0.04905000000000001
>>> t = 1
>>> y = v0*t - 0.5*g*t**2
>>> print (y)
-4.905
>>> #jauns bumbas metiens
>>> v0 = 5
>>> t = 0.7
>>> y = v0*t - 0.5*g*t**2
>>> print (y)
1.0965500000000001
>>> v0 = 5 ; t = 1; y = v0*t - 0.5*g*t**2
>>> print 'Pēc %g sekundes bumba būs %.2f metru augstumā \n''% (t,y)
SyntaxError: invalid syntax
>>> 'Pēc %g sekundes bumba būs %.2f metru augstumā \n'% (t,y)
'Pēc 1 sekundes bumba būs 0.09 metru augstumā \n'
>>> print 'Pēc %g sekundes bumba būs %.2f metru augstumā \n'% (t,y)
SyntaxError: invalid syntax
>>> print 'Pēc %g sekundes bumba būs %.2f metru augstumā \n' % (t,y)
SyntaxError: invalid syntax
>>> print 'Pēc %g sekundes bumba būs %.2f metru augstumā \n ' % (t,y)
SyntaxError: invalid syntax
>>> print ('Pēc %g sekundes bumba būs %.2f metru augstumā \n') % (t,y)
Pēc %g sekundes bumba būs %.2f metru augstumā 

Traceback (most recent call last):
  File "<pyshell#21>", line 1, in <module>
    print ('Pēc %g sekundes bumba būs %.2f metru augstumā \n') % (t,y)
TypeError: unsupported operand type(s) for %: 'NoneType' and 'tuple'
>>> type(t)
<class 'int'>
>>> type (y)
<class 'float'>
>>> print(t)
1
>>> print (Pēc %g sekundes bumba būs %.2f metru augstumā \n) % (t,y)
SyntaxError: invalid syntax
>>> print 'Pēc %g sekundes bumba būs %.2f metru augstumā \n' % (t,y)
SyntaxError: invalid syntax
>>> print ('Pēc %g sekundes bumba būs %.2f metru augstumā \n' % (t,y))
Pēc 1 sekundes bumba būs 0.09 metru augstumā 

>>> 
