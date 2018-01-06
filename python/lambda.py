# lambda examples with filter and map 

# lambda
f = lambda x,y,z: x + y**2 + z**3 == 32
print(f(1,2,3)) # 32

# filter out groups that give 32
v = [(2,3,4),(1,2,3),(30,1,1),(-1,5,2),(3,6,1)]
# multi variable to list 
temp = filter(lambda x: (x[0] + x[1]**2 + x[2]**3) == 32, v)
print(list(temp))
# use wrapper instead
temp = filter(lambda x: f(*x), v)
print(list(temp))

# map 
temp = map(lambda x: f(*x), v)
print(list(temp))

