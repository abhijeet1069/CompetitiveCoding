int countDigits(int n)
{
   if(n < 10) //smart programming
    return 1;
    return 1+countDigits(n/10);    
}

/*we generally use if(n > 0) //We fail if n = 0, count = 1
                       return (n%10)+sumOfDigits(n/10);
                   else
                       return 0; */
                 
