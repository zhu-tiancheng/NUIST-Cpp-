/*
����ĳ���ʵ�ָ���������㣬�����������ָ��λ�õĴ���ʹ��������������£� 
c3=(0, 0i)
c3=c1+c2=(4.7, 1.4i)
ע�⣺ֻ�����޸�ע�͡�ERROR������һ�У����øĶ������е��������ݣ�Ҳ���������ӻ�ɾ����䡣
Դ�����嵥��
*/
#include <iostream>
using namespace std;

/**********ERROR**********/
Complex //�Ӹ�class
{
	public:

/**********ERROR**********/
		void Complex(double, double) //��ΪComplex(double r=0, double i=0)
		{ real=r; imag=i; }
		Complex add(Complex &);
		void display() {
			cout<<"("<<real<<", "<<imag<<"i)"<<endl;
		}
	private: 
		double real, imag;
};

/**********ERROR**********/
Complex::add(Complex &c) //��ΪComplex Complex::add(Complex &c)
{	
	return Complex(real+c.real,imag+c.imag);
}
int main() {
	Complex c1(1.2,2.4),c2(3.5,-1),c3;
	cout<<"c3="; c3.display();

/**********ERROR**********/
	c3=c1+c2; //��Ϊc3=c1.add(c2)
	cout<<"c3=c1+c2="; c3.display();
	return 0;
}