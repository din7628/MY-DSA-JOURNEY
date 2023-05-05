/*DEFN:  Armstrong number is the number in any given number base, which forms the total of the same number, 
when each of its digits is raised to the power of the number of digits in the number.
EX:153,1634 etc..   */
bool ArmstrongNumber(int n)
{
    int originalno = n;
    int count = 0;
    int temp = n;
    while (temp != 0)
    {
        count++;
        temp = temp / 10;
    }
    int sumofpower = 0;
    while (n != 0)
    {
        int digit = n % 10;
        sumofpower += pow(digit,count);
        n /= 10;
    }
    return (sumofpower == originalno);
}
//T.C=O(N) WHERE N IS NO OF DIGITS
//S.C=O(1)
