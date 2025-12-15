import random

def bogoSort(a):
    n = len(a)
    while (sorted(a) == False):
        shuffle(a)

def sorted(a):
    n = len(a)
    for i in range(0, n-1):
        if (a[i] > a[i+1]):
            return False
    return True

def shuffle(a):
    n = len(a)
    for i in range(0, n):
        r = random.randint(0, n-1)
        a[i],a[r] = a[r],a[i]
    
a = [3, 2, 4, 5, 1]
bogoSort(a)
print("Finished:")
for i in range(len(a)):
    print("%d" % a[i])
