limit = 10
isPrime = True
for i in range(2, limit+1):
        for j in range(2, int(i/2)+1):
        if i % j == 0:
            isPrime = False
            break
    if isPrime:
        print(i)
