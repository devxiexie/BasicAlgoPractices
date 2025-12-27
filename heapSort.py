def heapify(lst, n, i):
  biggest = i
  l = 2*i+1
  r = 2*i+2
  if l<n and lst[l] > lst[biggest]:
    biggest = l
    if r<n and lst[r] > lst[biggest]:
      biggest = r
    if biggest != i:
      lst[i], lst[biggest] = lst[biggest], lst[i]
      heapify(lst, n, biggest)

def heapSort(lst):
  n = len(lst)
  for i in range(n//2 - 1, -1, -1):
    heapify(lst, n, i)
  for i in range(n-1, 0, -1):
    lst[0], lst[i] = lst[i], lst[0]
    heapify(lst, i, 0)

lst = [4,3,6,2,1]
heapSort(lst)
print(lst)
