/*
�뽫���³��򲹳�������ʹ�ó�������ʱ��������Ϊ��
Ĭ�Ϲ��죺4
���죺2
���ƣ�4
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
		     [1]      { cout<<"Ĭ�Ϲ��죺"<<number<<endl; } //Myclass()
		MyClass(int n) { 
			number=n;  
			cout<<"���죺"<<number<<endl; 
		}  
		MyClass(const MyClass &other) { 

/**********FILL**********/
			     [2]     ; //number=other.number
			cout<<"���ƣ�"<<number<<endl;
		}

/**********FILL**********/
		     [3]      { cout<<"����"<<endl; } //~MyClass()
	private:

/**********FILL**********/
		int      [4]     ; //number=4
};
void fun(MyClass &p) {  
	MyClass temp(p);
}
int main() {
	MyClass a, b(2);
	fun(a);  
	return 0;
}