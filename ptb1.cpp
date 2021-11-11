#include <iostream>
using namespace std;
int main(){
    int a, b;
    cin>>a>>b;
    if (a == 0 & b != 0) cout<<("VN");
    else if (a==0 && b==0) cout<<("VSN");
    else{
    	if(b%a==0) cout<<"x = "<<-b/a;
    	else cout<<"x = "<<(float)(-b)/a;
	}
}
