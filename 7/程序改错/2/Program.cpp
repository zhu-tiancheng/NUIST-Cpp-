/*
�����������ָ��λ�õĴ���ʹ��������������£� 
classBase
classD1
classD2
classD3
finBase
finD1
finD2

ע�⣺ֻ�����޸�ע��"ERROR"����һ�У����øĶ������е��������ݣ�Ҳ���������ӻ�ɾ����䡣
Դ����
*/
#include <iostream>
using namespace std;
class Base{

/**********ERROR**********/
	protected: //public:
		Base(){cout<<"classBase"<<endl;}
		void f(){cout<<"finBase"<<endl;} 
};

/**********ERROR**********/
class D1:public Base //public Base��Ϊvirtual public Base
{	public:
		D1(){cout<<"classD1"<<endl;}
		void f(){cout<<"finD1"<<endl;} 
};
class D2:virtual protected Base  
{	public:
		D2(){cout<<"classD2"<<endl;} 
		void f(){cout<<"finD2"<<endl;} 
};

/**********ERROR**********/
class D3:public D1,D2 //D2��Ϊpublic D2
{	public:
		D3(){cout<<"classD3"<<endl;} 
};
int main() {
	D3 d;

/**********ERROR**********/
	d.f(); //d.Base::f();
	d.D1::f();
	d.D2::f();
	return 0;
}