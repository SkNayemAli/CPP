 #include<iostream>
#include<iomanip>

using namespace std;

int main(){
// ****************Manipulators in C++***********
    int a =3, b=78, c=1233;
    cout<<"The value of a without setw is: "<<a<<endl;
    cout<<"The value of b without setw is: "<<b<<endl;
    cout<<"The value of c without setw is: "<<c<<endl;

    cout<<"The value of a with setw is: "<<setw(4)<<a<<endl;       //here setw-> using for space
    cout<<"The value of b with setw is: "<<setw(4)<<b<<endl;       //setw(4)-> means 4 space.....
    cout<<"The value of c with setw is: "<<setw(4)<<c<<endl;
	return 0;
}
