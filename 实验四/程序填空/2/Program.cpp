/*
�뽫���³��򲹳�������ʹ�ó�������ʱ��������Ϊ��
���죺2
���ƣ�2
���ƣ�2
����
����
����

ע�⣺��������ָ�����»��ߴ���д���ݣ���ɾ���»��߱�ţ����������ӻ�ɾ����䣬Ҳ���øĶ������е��������֡�
����Դ�������£�
*/
#include <iostream>
using namespace std;
class MyClass {
	public:

/**********FILL**********/
		     [1]      { //MyClass(int n)
			number=n;  
			cout<<"���죺"<<number<<endl; 
		}  

/**********FILL**********/
		MyClass(      [2]      ) { //MyClass &other
			number=other.number;
			cout<<"���ƣ�"<<number<<endl;
		}

/**********FILL**********/
		     [3]      { cout<<"����"<<endl; } //~MyClass()
	private:
		int number;
};

/**********FILL**********/
void fun(      [4]      ) { //MyClass p
	MyClass temp(p);
	return;
}
int main() {
	MyClass a(2);  
	fun(a);  
	return 0;
}