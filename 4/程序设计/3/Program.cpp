/*
�㣨Point�����Ա���£� 
��1�����г�Ա��
Point(float xx, float yy)   // ���캯������ʼ�����x, y����
void moveTo(float newX, float newY)  // �����x, y�����ƶ���newX, newY
��2��˽�г�Ա��
float x, y   // ��ĺ����꣬������
�ڴ˻����ϣ�����Բ��Circle���࣬���Ա���£�
��1�����г�Ա��
Circle(float x=0.0,float y=0.0,float r=1.0) // ���캯��������(x,y)ΪԲ��λ�ã�rΪԲ�İ뾶����=3.14
void resetCircle(float newX, float newY, float newR) // ����Բ������x, y���Լ��뾶radius
double getRadius()  // ����Բ�İ뾶
double getCircumference() // ����Բ���ܳ�
bool isEqual(Circle &c) // �ж�����һ��Բ�Ƿ��С��ȣ��뾶�Ƿ���ȣ�
��2��˽�г�Ա��
Point p   // Բ��λ��
float radius  // Բ�İ뾶
double circumference // Բ���ܳ�
���������˵�������Point��Circle������Ķ��塣
ע�⣺����Դ�����������������ע��"Begin"��"End"֮����д���ݣ����øĶ�main�������������е��κ����ݡ�
����������
���룺
0 0 1
3 4 5
�����
c1 �뾶: 1, �ܳ�: 6.28
c2 �뾶: 1, �ܳ�: 6.28
�Ƿ����: 1
���ú�:
c1 �뾶: 1, �ܳ�: 6.28
c2 �뾶: 5, �ܳ�: 31.4
�Ƿ����: 0
�������
*/
#include<iostream>
#include<fstream>
using namespace std;
const double PI=3.14;

/*******Begin*******/
class Point { 
	public:
		Point(float xx,float yy): x(xx),y(yy) { } 	
		void moveTo(float newX,float newY) { x=newX,y=newY; } 	
	private:
		float x,y;
}; 

class Circle {
	public:
		Circle(float x=0.0,float y=0.0,float r=1.0):p(x,y) {
			radius=r;
			circumference=2*PI*radius;
		}
		void resetCircle(float newX,float newY,float newR) {
			p.moveTo(newX,newY);
			radius=newR;
			circumference=2*PI*radius;
		}
		double getRadius() { return radius; }
		double getCircumference() { return circumference; }
		bool isEqual(Circle &c) {
			if(radius==c.radius) return true;
			return false;	
		}
	private:
		Point p; 
		float radius;
		double circumference;
};



/*******End*********/

int main() {
	float x,y,r;
	cin>>x>>y>>r;
	Circle c1(x,y,r),c2;
	cout<<"c1 �뾶: "<<c1.getRadius()<<", �ܳ�: "<<c1.getCircumference()<<endl;
	cout<<"c2 �뾶: "<<c2.getRadius()<<", �ܳ�: "<<c2.getCircumference()<<endl;
	cout<<"�Ƿ����: "<<c2.isEqual(c1)<<endl;	
	cin>>x>>y>>r;
	c2.resetCircle(x,y,r);
	cout<<"���ú�:\nc1 �뾶: "<<c1.getRadius()<<", �ܳ�: "<<c1.getCircumference()<<endl;
	cout<<"c2 �뾶: "<<c2.getRadius()<<", �ܳ�: "<<c2.getCircumference()<<endl;
	cout<<"�Ƿ����: "<<c2.isEqual(c1)<<endl;
	ifstream in1("4.2.2_2-2.in");
	ofstream out1("4.2.2_2-2.out");
	while(in1>>x>>y>>r) {
		Circle c1(x,y,r),c2;
		out1<<"c1 �뾶: "<<c1.getRadius()<<", �ܳ�: "<<c1.getCircumference()<<endl;
		out1<<"c2 �뾶: "<<c2.getRadius()<<", �ܳ�: "<<c2.getCircumference()<<endl;
		out1<<"�Ƿ����: "<<c2.isEqual(c1)<<endl;		
		in1>>x>>y>>r;
		c2.resetCircle(x,y,r);
		out1<<"���ú�:\nc1 �뾶: "<<c1.getRadius()<<", �ܳ�: "<<c1.getCircumference()<<endl;
		out1<<"c2 �뾶: "<<c2.getRadius()<<", �ܳ�: "<<c2.getCircumference()<<endl;
		out1<<"�Ƿ����: "<<c2.isEqual(c1)<<endl<<endl;
	}
	return 0;
}