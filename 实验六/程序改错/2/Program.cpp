/*
�����������ָ��λ�õĴ���ʹ��������������£�
x-y=-1
x+y=7

ע�⣺ֻ�����޸�ע��"ERROR"����һ�У����øĶ������е��������ݣ�Ҳ���������ӻ�ɾ����䡣
Դ�����嵥��
*/
#include <iostream>  
using namespace std; 
 
/**********ERROR**********/
Test //��ͷ��class
{		const int x;

/**********ERROR**********/
		int y; //��ͷ��static
	public: 
		Test(int i,int j): x(i) { y=j; } 

/**********ERROR**********/
		int display() //void display() const
		{ cout<<"x+y="<<x+y<<endl; }  
		void display() { cout<<"x-y="<<x-y<<endl; }  
}; 
int Test::y=0;
 
int main() {  
	Test t1(1,2); 
	t1.display();
	const Test t2(3,4); 

/**********ERROR**********/
	t2.display() const; //ȥ��const
	return 0; 
}