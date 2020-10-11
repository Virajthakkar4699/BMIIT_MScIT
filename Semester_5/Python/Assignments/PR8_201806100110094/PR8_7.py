def test_prime(n):

    if (n==1):
        print("number is not prime number.")
    elif (n==2):
        print("number is prime number.")
    else:
        for x in range(2,n):
            if(n % x==0):
                print("number is not prime number.")
            else:
                print("number is prime number.")               

print(test_prime(1))