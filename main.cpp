#include <iostream>
using namespace std;
class Calc {
	int num;
public:
	Calc();
	Calc(int x);
	Calc(const Calc& x);
	Calc operator++();
	Calc operator++(int val);
	void Print();
};
Calc::Calc() {
	num = 0;
}
Calc::Calc(int x) {
	num = x;
}
Calc::Calc(const Calc& x) {
	num = x.num;
}
Calc Calc::operator++() {
	++num;
	return *this;
}
Calc Calc::operator++(int val) {
	Calc tmp;
	tmp = num++;
	return tmp;
}
void Calc::Print() {
	cout << "num : " << num << endl;
}
int main() {
	Calc a(1);
	Calc b(2);
	++a;
	a.Print();
	b = a++;
	a.Print();
	b.Print();
	return 0;
}