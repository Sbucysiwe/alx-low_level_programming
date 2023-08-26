import ctypes

clib = ctypes.CDLL('./100-operations.so')

a = 10
b = 20

print(clib.add(a, b)) 
print(clib.sub(a, b))
