/*
�뽫���³��򲹳�������ʹ�ó�������ʱ��������Ϊ��
The computer id is 101
The type of monitor is B

ע�⣺��������ָ�����»��ߴ���д���룬���øĶ������е��������ݣ���ɾ���»��߱�ţ���
����Դ����
*/
#include<iostream>
using namespace std;
class Monitor {
	public:
		Monitor(char t) { type=t; }
		void display() const {
			cout<<"The type of monitor is "<<type<<endl;
		}
	private:
		char type;
};
class Computer {
	public:

/**********FILL**********/
		Computer(int i, char c):      [1]      { id=i; } //mon(c)
		void Display() const { 
			cout<<"The computer id is "<<id<<endl;

/**********FILL**********/
			     [2]     ;  //mon.display()
		}
	private:
		int id;
		Monitor mon;
};
int main() {
	const Computer myComputer(101, 'B');

/**********FILL**********/
	     [3]     ;  //myComputer.Display()
	return 0;
}

