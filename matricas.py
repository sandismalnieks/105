import numpy as np

A = np.array([[-0.10, 0.40], [0.10, 0.30]])
B = np.array([[0.40, -0.20, 0.40], [-0.20, 0.40, 0.40]])
result = [[0,0,0,0],
         [0,0,0,0],
         [0,0,0,0]]
for i in range(len(A)):
   for j in range(len(B[0])):
       for k in range(len(B)):
           result[i][j] += A[i][k] * B[k][j]
for r in result:
   print(r)