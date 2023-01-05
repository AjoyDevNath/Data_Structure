#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a;

    int **q = &ptr;
    int ***r = &q;
    cout<<***r<<"\n";


    return 0;
}
