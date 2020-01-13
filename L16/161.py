v0 = float(input('Ievadi sākuma ātrumu [m/s]: '))
print ('Sākuma ātrums ir %.2f m/s' % (v0))
g = 9.81

for i in range(10 + 1):
	t = float(i) / 10
	y = v0 * t - 0.5 * g * t ** 2
	print("v0 = %.2f; t = %.1f; y = %.3f" % (v0, t, y))
