# 1B1.py 
# Sandis Mālnieks 193RIC058


from numpy import * # Importē skaitlisko metožu bibliotēkas funkcijas
from matplotlib import pyplot as plt

x = linspace(0, 7, 70) # Trešais arguments ir ģenerējamo elementu skaits
y = sin(x)

plt.grid()
plt.xlabel('x')
plt.ylabel('f(x)')
plt.title('Funkcija $sin(x)$')
plt.plot(x, y, color = "#006400")

y = x # f(x) = x
plt.plot(x, y)

y = x - pow(x,2)/math.factorial(3)
plt.plot(x, y)

y = x - pow(x,2)/math.factorial(3)+pow(x,5)/math.factorial(5)
plt.plot(x, y)

y = x - pow(x,2)/math.factorial(3)+pow(x,5)/math.factorial(5)-pow(x,7)/math.factorial(7)
plt.plot(x, y)

plt.show()
