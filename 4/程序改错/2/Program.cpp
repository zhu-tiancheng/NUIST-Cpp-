/*
�뽫���³��򲹳�������ʹ�ó�������ʱ��������Ϊ��
Ĭ�Ϲ��죺6
���죺2
���ƣ�2
����fun����
����
����
����
ע�⣺ֻ�����޸�ע�͡�ERROR������һ�У����øĶ������е��������ݣ�Ҳ���������ӻ�ɾ����䡣
Դ�����嵥��
*/
#include <iostream>
using namespace std;
class MyClass {
	public:

/**********ERROR**********/
		void MyClass() //��ΪMyclass()
		{ cout<<"Ĭ�Ϲ��죺"<<number<<endl; }
		MyClass(int n) {
			number=n;
			cout<<"���죺"<<number<<endl; 
		}  

/**********ERROR**********/
		MyClass(const MyClass other) { //��otherǰ���&
			number=other.number;
			cout<<"���ƣ�"<<number<<endl;
		}

/**********ERROR**********/
		MyClass() //��~
		{ cout<<"����"<<endl; }
	private:
		int number=6;
};

/**********ERROR**********/
void fun(MyClass p) { //��pǰ���&
	MyClass temp(p);
	cout<<"����fun����"<<endl;
}
int main() {
	MyClass a, b(2);
	fun(b);
	return 0;
}