import ctypes
import time
# cc -fPIC -shared -o clibrary.so clibrary.c

clibrary = ctypes.CDLL("/Users/hatuongnguyen/Desktop/CppVSC/ctypes/clibrary.so")

start1 = time.time()
for i in range(1000):
    for j in range(1000):
        print(i, j, end=' ')
    print('\n')
end1 = time.time()
a = end1 - start1

start = time.time()
clibrary.display()
end = time.time()
print(a)
print(end - start)