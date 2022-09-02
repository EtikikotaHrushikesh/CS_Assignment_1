import random as r
import time

# get the start time
p_start = time.process_time()
n=int(input())
A = [[(r.uniform(0,100)) for i in range (n)]for _ in range(n)]
 
# take a 3x4 matrix   
B = [[r.uniform(0,100) for i in range (n)]for _ in range(n)]
result = [[r.uniform(0,100) for i in range (n)]for _ in range(n)]
 
meat_start=time.process_time()
for i in range(n):
 
    # iterating by column by B
    for j in range(n):
 
        # iterating by rows of B
        for k in range(n):
            result[i][j] += A[i][k] * B[k][j]
meat_end=time.process_time()
'''for i in range(n):
    for j in range(n):
    	print(result[i][j],end=' ')
    print()
'''
meat_time = meat_end - meat_start
print("The Time taken by meat portion of program is:",meat_time)
p_end=time.process_time()
p_time = p_end - p_start
print("The Time taken by whole program is:",p_time)

