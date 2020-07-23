#include<bits/stdc++.h>
using namespace std;

unsigned int getFirstSetBit(int n){ //get index of rightmost bit. For ex : 18 = 10010 ,o/p=2
    
    int place = 0, test = 0;
    if(n == 0)
        return 0;
    else{
        while(n != 0 && test != 1){
            test = n & 1;
            n = n>>1;
            place++;
        }
        return place;
    }
}

int main()
{
    int t;
    fstream file;
    string fileName = "input.txt"; //getting input from file instead of stdin
    file.open(fileName.c_str());
    file>>t; // testcases
    while(t--)
    {
        int n;
        file>>n; //input n
        printf("%u\n", getFirstSetBit(n)); // function to get answer
    }
	return 0;
}
