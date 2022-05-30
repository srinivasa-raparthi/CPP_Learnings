#include<iostream>
#include<iomanip>


/* Friend Functions:
In priniciple, private and protected members of a class cannot be accessed 
from outside the same class in which they are declared. However, this rule does not apply
to "friends".

Friends are functions are classes declared with the friend keyword

*/
using namespace std;

class Base{
    int width,height;

    public:
    Base(){}
    Base(int x,int y):width(x),height(y){}
    int area(){ return width * height; }
    friend Base duplicate(const Base&);

};


Base duplicate(const Base& param)
{
    Base res;
    res.width = param.width * 2;
    res.height = param.height * 3;

    return res;

}

int main() {


    system("CLS");
	cout << "Welcome to Consistent Learning" << endl;

    Base b1;
    Base b2(2,3);

    b1 = duplicate(b2);

    cout<<"Area of b2 :"<<b2.area()<<endl;
    cout<<"Area of b1 :"<<b1.area()<<endl;


	return 0;
}