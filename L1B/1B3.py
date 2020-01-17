# 1B3.py Programma grafiskai kompleksā skaitļa attēlošanai polārās koordinātās
# Autors: Sandis Mālnieks 193RIC058
# Datums: 17.01.2020

from matplotlib.pyplot import figure, show
from math import pi

fig = figure() # izveido sagatavi grafikam

ax = fig.add_subplot(111, polar=True) # zīmējums būs polārās koordinātās
theta = [30,60] # leņķis grados (komplekso skaitļu argumenti)
theta = [i*pi/180 for i in theta] # leņķi pārveido: grad/rad
r = [1.,2.] # radiuss (komplekso skaitļu moduļi) 
ax.bar(theta,r, width=0.01) # radiuss tiek zīmēts ar sektora platumu 0.01
show() # Zīmējumu parāda


