//T.C=O(LOGN),S.C=O(1)
#include<iostream>
using namespace std;
int reverse_no(int N)
{
  int num=N;
  int rev=0;
  while(num!=0)
  {
    int rem=0;
    rev=rev*10+rem;
    num=num/10;
  }
  return rev;
}
bool palindrome(int N)
{
  int dummy=N;
  int x=reverse_no(N);
  if(dummy==x)
    return true;
  else
    return false;
}
int main()
{
  int N;
  cin>>N;
  bool p=palindrome(N);
  if(p)
     cout<<"IS PALINDROME":
  else
      cout<<"NOT A PALINDROME";
}
