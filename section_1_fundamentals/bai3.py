n = int(input("nhập n:"))
arr=[]
for i in range (0,n):
  x = int(input("nhập phần tử thứ " + str(i+1) + ":"))
  arr.append(x)
arr.sort()
for y in arr:
  print(y,end=" ")

