/*
�뽫���³��򲹳�������ʹ�ó�������ʱ��������Ϊ��
1, 1, 2.3
2, 4.6

ע�⣺��������ָ�����»��ߴ���д���ݣ���ɾ���»��߱�ţ����������ӻ�ɾ����䣬Ҳ���øĶ������е��������֡�
����Դ����
*/
#include <iostream>
using namespace std;
class Base {
	public:

/**********FILL**********/
		Base(int a):      [1]       { } //idata(a)
		void print() { cout<<idata<<", "; }
	private:
		int idata;
};

/**********FILL**********/
class       [2]       { //Derived:public Base
	public:

/**********FILL**********/
		Derived(int a, double b):      [3]      { ddata=b; } //Base(a)
		void print() {

/**********FILL**********/
			      [4]      ; //Base::print()
			cout<<ddata<<endl;
		}
	private:
		double ddata;
};
int main() {
	Derived d1(1,2.3), d2(2,4.6);

/**********FILL**********/
	      [5]      ; //di.Base::print()
	d1.print();
	d2.print();
	return 0;
}