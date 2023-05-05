//DEFN:A NO THAT HAS EXACTLY 2 FACTORS 1 AND ITSELF
/* BRUTE FORCE T.C=O(N),S.C=O(1)
bool isPrime(int N) {
  for (int i = 2; i < N; i++) {
    if (N % i == 0) {
      return false;
    }
  }
  return true;
}
*/
//OPTIMISED APPROACH USING SQUARE ROOT OF THE GIVEN NO
//HERE WE ARE EXCLUDING 1 AND N(ITSELF) AND CHECKING IF THERE ARE ANY FACTORS, IF THERE ARE ANY FACTORS IT CLEARLY MEANS NOT A PRIME NO
//T.C=O(SQRT(N) S.C=O(1)
bool isPrime(int N) {
  for (int i = 2; i < sqrt(N); i++) {
    if (N % i == 0) {
      return false;
    }
  }
  return true;
}
