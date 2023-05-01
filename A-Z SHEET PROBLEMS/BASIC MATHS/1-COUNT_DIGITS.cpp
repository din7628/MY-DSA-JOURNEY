//METHOD 1,TC=O(n),SC=O(1)
int count_digits( int n )
{
   int x = n; int count =0;
   while( x !=0 ) 
   {
       x = x / 10;
       count++;
   }
   return count;
}
/* METHOD 2,TC=O(1),SC=O(1) USING to_string()

int count_digits( int n )
{
  string x = to_string(n);
  return x.length(); 
}
*/
/* METHOD 3,TC=O(1),SC=O(1) using log function
int count_digits( int n )
{
  int digits = floor(log10(n) + 1);
  return digits;
}
*/
