/*
�����������ָ��λ�õĴ���ʹ��������������£� 
Base1
Base2
3, 1, 4

ע�⣺ֻ�����޸�ע��"ERROR"����һ�У����øĶ������е��������ݣ�Ҳ���������ӻ�ɾ����䡣
Դ�����嵥��
*/
#include <iostream>
using namespace std;
class Base1 {
	public: 
		Base1(int x) {
			b1=x;
			cout<<"Base1"<<endl;
		}
	protected: 
		int b1;  
};
class Base2 {
	public:
		Base2() {
			b2++;
			cout<<"Base2"<<endl;
		}
	protected:
		static int b2; 
};

/**********ERROR**********/
static int b2=0; //int Base::b2=0;

/**********ERROR**********/
class Derived:public Base1,Base2 //Base2��Ϊpublic Base2
{	public:

/**********ERROR**********/
		Derived(int a,int b):b1=a    //b1��ΪBase1(a)
		{ d=b; }  // �β�a,b�ֱ����ڳ�ʼ�����ݳ�Աb1,d

/**********ERROR**********/
		void Display() ////ĩβ��const
		{ cout<<b1<<", "<<b2<<", "<<d<<endl; }
	private:
		int d;
};
int main() {
	const Derived d(3,4);
	d.Display(); 
	return 0;
}