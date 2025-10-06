def fibonaci(n):
    if n == 1:
      x = 0
    elif n == 2:
      x = 1
    else:
      x = fibonaci(n-1) + fibonaci(n-2)
    return x
def main():
    k = int(input("nhập số k :"))
    print(fibonaci(k))
main()
