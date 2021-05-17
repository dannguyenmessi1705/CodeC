#include<iostream>
using namespace std;
int main()
{
int n , a;
cout <<"Nhap n>0: ";
cin >>n;
int     k=0,sochan=0,sole=0;
    while(n>0)
    {
        a = n %10; // them cai dong nay vao ban
        n=n/10;
        k++;
        if(a%2==0)
            sochan++;
        else sole++;
 
    }
cout <<n<<" co "<<k<<" chu so, co "<<sochan<<" so chan va "<<sole<<" so le"<<endl;
 
}
