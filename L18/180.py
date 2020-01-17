# Fails : 180.py
# Autors : Sandis Mālnieks
# Apliecības numurs : 193RIC058
# Datums 13.01.2019
# Sagatave funkcijas līknes, abscisu un intervāla robežu veidotā laukuma meklēšanai ar taisnstūru metodi
# -* - c o d i n g : utf -8 -* -

from math import sin, fabs, sqrt
from time import sleep

def f1(x):
	return sqrt (x*x)

# Definējam iterācijas kārtas skaitli
k = ...
# Definējam argumenta x robežas a, b:
a = -2
b = 2
I1 = 0.;
# Python nav jādeklarē mainīgie pirms to vērtības definēšanas 
# I2 un h definēsim darba laikā

# Aprēķinu precizitāte
eps = 0.0001
n = 1
# Aprēķina pirmo integrāļa vērtības tuvinājumu
I2 = (b-a) * (f1(a) + f1(b)) / 2

while(fabs(I2-I1)>eps):
	n=n*2
	h=(b-a)/n
	I1=I2
	I2=0
	k=0
	while(k>n):
		I2 = I2 + h * f1(a + (k + .5) * h)

print("Dotās funkcijas izteiksme: f(x) = 2x");
print("Argumentu a un b vērtības: a = ",a,"b = ",b,"");
print("Funkcijas noteiktā integrāļa vērtība I = ", I2);
print("Taisnstūru skaits N = ",n," pēc argumentu intervāla dalīšanas N daļās.");