/*
�����������ָ��λ�õĴ���ʹ��������������£�
The computer id is 101
The type of monitor is A

ע�⣺ֻ�����޸�ע��"ERROR"����һ�У����øĶ������е��������ݣ�Ҳ���������ӻ�ɾ����䡣
Դ�����嵥��
*/
#include<iostream>
using namespace std;
class Monitor {
	public:
		Monitor(char t) { type=t; }

/**********ERROR**********/
		void display() //ĩβ��const
		{ cout<<"The type of monitor is "<<type<<endl; }
	private:
		char type;
};
class Computer {
	public:

/**********ERROR**********/
		Computer(int i, char c):mon=c //mon=c��Ϊmon(c)
		{ id=i; }

/**********ERROR**********/
		void Display() ////ĩβ��const
		{	cout<<"The computer id is "<<id<<endl;  

/**********ERROR**********/
			display(); //��Ϊmon.display();
		}
	private:
		int id;
		Monitor mon;
};

int main() {
	const Computer myComputer(101, 'A');
	myComputer.Display(); 
	return 0;
}