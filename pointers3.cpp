#include<iostream>
using namespace std;
int main()
{   int x[3][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};
    int *n=&x[0][0];
    cout<<"\t\t\t*********s[2][1]====*(*(s+2)+1)********\n"
        <<"*n="<<*n<<endl
        <<"*n+1="<<*n+1<<endl
        <<"*(n+1)"<<*(n+1)<<endl
        <<"*(*(x+2)+1)="<<*(*(x+2)+1)<<endl
        <<"*(*x+1)="<<*(*x+1)<<endl
        <<"*(*(x+2)+1)="<<*(*(x+2)+1)<<endl;
    return 0;

}
