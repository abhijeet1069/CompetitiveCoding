
#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int n){
    if(n > 0)
        return (n%10)+sumOfDigits(n/10);
    else
        return 0;    
}


int main()
{
    int T;
    fstream file;
    string fileName = "input.txt";
    file.open(fileName.c_str());
    file>>T;
    
    while(T--)
    {
        int n;
        file>>n;
        cout<<sumOfDigits(n)<<endl;
    }
    return 0;
}

