#include <iostream>
#include <string>
#include <vector>

using namespace std;

class base {
public :
	int basevalue;
	base (int v):basevalue (v){}
	int getvalB() {
		return basevalue;
	}
};

class derived : public base {
public:
	string derivedvalue;
	//derived(int a, string b){}
	derived(int a, string b) :base(a), derivedvalue(b){}
	string getvalD() {
		return derivedvalue;
	}

};
int main() {
	derived d1(343,"yellow");
	cout << d1.getvalD();
	cout<<"this is just to check if git is integrated.\n";

}
