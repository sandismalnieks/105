# 1B1.py 
# Sandis Mālnieks 193RIC058


from numpy import * # Importē skaitlisko metožu bibliotēkas funkcijas
from matplotlib import pyplot as plt

x = linspace(0, 7, 70) # Trešais arguments ir ģenerējamo elementu skaits
y = cos(x)
y2 = sin(x)


plt.grid()
plt.xlabel('x')
plt.ylabel('f(x)')
plt.title('Funkcijas $cos(x)$ un $sin(x)$')
plt.plot(x, y, color = "#006400")
plt.plot(x,y2)
plt.show()
