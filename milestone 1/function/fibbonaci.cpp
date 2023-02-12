
bool checkMember(int n){

  /* Don't write main().
   * Don't read input, it is passed as function argument.
   * Return output and don't print it.
   * Taking input and printing output is handled automatically.
  */
int fib1=0;
int fib2=1;
int fib=0;
while(fib<n)
{
fib=fib1+fib2;
fib1=fib2;
fib2=fib;
}
    if(fib==n)
    {
        return true;
    }
    else
        return false;

}

