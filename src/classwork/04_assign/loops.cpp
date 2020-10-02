//cpp
int factorial(int num)
{
    int inc = num-1;
    int sum = num;
    while(inc>1)
    {
        sum=sum * (inc);
        inc--;
    }

    return sum;
}