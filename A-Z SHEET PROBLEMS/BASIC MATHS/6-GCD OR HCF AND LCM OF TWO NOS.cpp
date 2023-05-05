/*BRUTE FORCE METHOD T.C=O(min(a,b)),S.C=O(1)
void gcdandlcm(int a,int b)
{
  int gcd=0,lcm=0;
  for(int i=1;i<=min(a,b);i++)
  {
    if(a%i==0&&b%i==0)
    {
      gcd=i;
    }
  }
  lcm=(a*b)/gcd;
  cout<<lcm<<" "<<gcd<<endl;  
}
*/
//USING RECURSION VIA EUCLIDEAN'S THEOREM T.C=O(log phi min(a,b)) phi is base  it is phi because we dont know values of a and b as they keep changing,S.C=O(1)
int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	return gcd(b,a%b);
}
//WITHOUT USING RECURSION VIA EUCLIDEAN'S THEOREM T.C=O(log phi min(a,b)) phi is base  it is phi because we dont know values of a and b as they keep changing,S.C=O(1)
int gcd(int a,int b)
{
  while(a>0&&b>0)
  {
    if(a>b)
      a=a%b;
    else
      b=b%a;
  }
  if(a==0)
    return b;//b is gcd
  else
    return a;//a is gcd
}
