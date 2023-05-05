/*BRUTE FORCE
Time Complexity: O(n), because the loop has to run from 1 to n always. 
Space Complexity: O(1), we are not using any extra space.
void printDivisorsBruteForce(int n){

	cout<<"The Divisors of "<<n<<" are:"<<endl;
	for(int i = 1; i <= n; i++)
		if(n % i == 0)
			cout << i << " ";
	
	cout << "\n";
}
*/
//OPTIMISZED APPROACH
//T.C=O(sqrt(n))+O(nlogn)+O(n) where n is no of divisors/factors
//S.C=O(sqrt(n))
void printalldivisors(int n)
{
  vector<int> ls;
  for(int i=1;i*i<=n;i++)
  {
    if(n%i==0)
    {
      ls.push_back(i);
      if((n/i)!=i)
      {
        ls.push_back(n/i);
      }
    }
  }
  sort(ls.begin(),ls.end());
  for(auto it:ls)
     cout<<it<<" ";
}

  
