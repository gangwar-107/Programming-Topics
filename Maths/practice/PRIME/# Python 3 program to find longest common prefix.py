# CPP program to find sum and product of 
# composites which are divisible by k in given array.

from math import sqrt
# Function to find count of composite
def compositeSumProduct(arr, n, k):
    # Find maximum value in the array
    max_val = arr[0];
    for i in range(len(arr)):
        if(max_val<arr[i]):
            max_val=arr[i];


    # Use sieve to find all prime numbers less than
    # or equal to max_val
    # Create a boolean array "prime[0..n]". A
    # value in prime[i] will finally be false
    # if i is Not a prime, else true.
    prime = [ True for i in range(max_val + 1)]

    # Remaining part of SIEVE
    prime[0] = True
    prime[1] = True
    k = int(sqrt(max_val))+1
    for p in range(2,k,1):
        # If prime[p] is not changed, then
        # it is a prime
        if (prime[p] == True):
            # Update all multiples of p
            for i in range(p * 2,max_val+1,p):
                prime[i] = False

    # Sum all primes in arr[]
    sum = 0
    product = 1
    for i in range(0,n,1):
        if (prime[arr[i]] == False and arr[i] % k == 0):
            sum += arr[i]
            product *= arr[i]

    print("Sum of composite numbers divisible by k is",sum)
    print("Product of composite numbers divisible by k is",product)

# Driver code
if __name__ == '__main__':
    arr = [1, 2, 3, 4, 5, 6, 7]
    n = len(arr)
    k = 2
    compositeSumProduct(arr, n, k)

# This code is contributed by
# Surendra_Gangwar

