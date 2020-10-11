def returnSum(numbers):
    sum=0;
    for i in numbers:
        sum=sum+numbers[i];

    return(sum);

numbers={'a':100,'b':150,'c':200}
print("Sum :",returnSum(numbers));
