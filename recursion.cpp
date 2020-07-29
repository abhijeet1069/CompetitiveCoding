// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

void printNos(int N);


int main()
{
    int T;
    fstream file;
    string fileName = "input.txt";
    file.open(fileName.c_str());
    file>>T;
    
    while(T--)
    {
        int N;
        file>>N;
        printNos(N);
        
        cout<<endl;
    }
    return 0;
}

void printNos(int N)
{
    if(N > 0){
        printNos(N-1);
        cout<<N<<" "; 
    }
    return;
}
