/*
�����������ָ��λ�õĴ���ʹ��������������£� 
x=10, Previous=9, Next=11
ע�⣺ֻ�����޸�ע��"ERROR"����һ�У����øĶ������е��������ݣ�Ҳ���������ӻ�ɾ����䡣
Դ�����嵥��
*/
#include<iostream>
using namespace std;

/**********ERROR**********/
void prevnext(int x,int prev,int next)  {//��prev��nextǰ�����& 

/**********ERROR**********/
	prev=x--;//��Ϊx-1  	 
	next=++x; 
}
int main() {
	int x=10,y,z;
	prevnext(x,y,z);
	cout<<"x="<<x<<", Previous="<<y<<", Next="<<z<<endl;
	return 0;
}
