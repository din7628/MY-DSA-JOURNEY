int reverse_no(int N)
{
  int num=N;
  int rev=0;
  while(num!=0)
  {
    int rem=rem%10;
    rev=rev*10+rem;
    num=num/10;
  }
  return rev;
}
