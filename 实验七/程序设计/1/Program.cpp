/*
�㣨Point�����Ա���£� 
��1�����г�Ա��
Point(float xx, float yy)  // ���캯������ʼ�����x, y����
float getX() const  // ���غ�����x
float getY() const  // ����������y
void setX(float newX)  // ���������ΪnewX
void setY(float newY)  // ����������ΪnewY
��2��˽�г�Ա��
float x, y  // ��ĺ����꣬������
��Point�๫��������Բ��Circle���࣬����Point��x, y��Ա��ΪԲ�ĵ����꣬���������³�Ա��
��1�����г�Ա��
Circle(float x=0.0, float y=0.0, float r=1.0)  // ���캯��������(x,y)ΪԲ��λ�ã�rΪԲ�İ뾶
void moveTo(float newX, float newY)  // ƽ�Ʋ�������Բ���ƶ���newX, newY
float getRadius() const  // ����Բ�İ뾶
double getCircumference() const  // ���㲢����Բ���ܳ�����=3.14159
double getArea() const  // ���㲢����Բ���������=3.14159
double dist(const Circle &c) const  // ���㲢���ص���һ��Բ�ľ��루Բ��֮��ľ��룩
bool isEqual(const Circle &c) const  // �ж�����һ��Բ�Ƿ��С���
��2��˽�г�Ա��
float radius  // Բ�İ뾶 

���������˵�������Point��Circle������Ķ��塣
ע�⣺����Դ�����Ѹ�������������ע�͡�Begin���͡�End��֮����д���ݣ����øĶ��������е��κ����ݡ�

����������
���룺
0 0 1
3 4
�����
��ʼ: 
c1��Բ��: (0, 0), �뾶: 1, �ܳ�: 6.28318, ���: 3.14159
c2��Բ��: (0, 0), �뾶: 1, �ܳ�: 6.28318, ���: 3.14159
c1��c2Բ��֮����룺0
c1��c2��С�Ƿ���ȣ�1

ƽ�ƺ�: 
c2��Բ��: (3, 4), �뾶: 1, �ܳ�: 6.28318, ���: 3.14159
c1��c2Բ��֮����룺5
c1��c2��С�Ƿ���ȣ�1

�������
*/
#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;
const double PI=3.14159;

/*******Begin*******/

class Point { 
	public:
		Point(float xx,float yy): x(xx),y(yy) { } 	
		float getX() const { return this->x; }
		float getY() const { return this->y; }	
		void setX(float newX){ this->x=newX; } 
		void setY(float newY){ this->y=newY; } 
	private:
		float x,y;
};  

class Circle:public Point {
	public:
		Circle(float x=0.0,float y=0.0,float r=1.0):Point(x,y) {
			this->radius=r;
		}
		void moveTo(float newX,float newY) {
			setX(newX); setY(newY);
		}
		float getRadius() const { return this->radius; }
		double getCircumference() const { return 2*PI*radius; }
		double getArea() const { return PI*radius*radius; }
		double dist(const Circle &c) const {
			double x=this->getX()-c.getX(),y=this->getY()-c.getY();
			return sqrt(x*x+y*y);
		}
		bool isEqual(const Circle &c) const {
			if(this->radius==c.radius) return true;
			return false;	
		}
	private:
		float radius;
};

/*******End*********/

int main() {
	float x,y,r;
	cin>>x>>y>>r;
	Circle c1(x,y,r),c2;
	cout<<"��ʼ: "<<endl;
	cout<<"c1��Բ��: ("<<c1.getX()<<", "<<c1.getY()<<"), "<<"�뾶: "<<c1.getRadius()<<", �ܳ�: "<<c1.getCircumference()<<", ���: "<<c1.getArea()<<endl;
	cout<<"c2��Բ��: ("<<c2.getX()<<", "<<c2.getY()<<"), "<<"�뾶: "<<c2.getRadius()<<", �ܳ�: "<<c2.getCircumference()<<", ���: "<<c2.getArea()<<endl;
	cout<<"c1��c2Բ��֮����룺"<<c1.dist(c2)<<endl;	
	cout<<"c1��c2��С�Ƿ���ȣ�"<<c1.isEqual(c2)<<endl<<endl;
	
	cin>>x>>y;
	c2.moveTo(x,y);
	cout<<"ƽ�ƺ�: "<<endl;
	cout<<"c2��Բ��: ("<<c2.getX()<<", "<<c2.getY()<<"), "<<"�뾶: "<<c2.getRadius()<<", �ܳ�: "<<c2.getCircumference()<<", ���: "<<c2.getArea()<<endl;
	cout<<"c1��c2Բ��֮����룺"<<c1.dist(c2)<<endl;	
	cout<<"c1��c2��С�Ƿ���ȣ�"<<c1.isEqual(c2)<<endl<<endl;

	ifstream in1("7.1.2_1-s2_in.dat");
	ofstream out1("7.1.2_1-s2_out.dat");
	while(in1>>x>>y>>r) {
		Circle c1(x,y,r),c2;
		out1<<"��ʼ: "<<endl;
		out1<<"c1��Բ��: ("<<c1.getX()<<", "<<c1.getY()<<"), "<<"�뾶: "<<c1.getRadius()<<", �ܳ�: "<<c1.getCircumference()<<", ���: "<<c1.getArea()<<endl;
		out1<<"c2��Բ��: ("<<c2.getX()<<", "<<c2.getY()<<"), "<<"�뾶: "<<c2.getRadius()<<", �ܳ�: "<<c2.getCircumference()<<", ���: "<<c2.getArea()<<endl;
		out1<<"c1��c2Բ��֮����룺"<<c1.dist(c2)<<endl;	
		out1<<"c1��c2��С�Ƿ���ȣ�"<<c1.isEqual(c2)<<endl<<endl;
		
		in1>>x>>y;
		c2.moveTo(x,y);
		out1<<"ƽ�ƺ�: "<<endl;
		out1<<"c2��Բ��: ("<<c2.getX()<<", "<<c2.getY()<<"), "<<"�뾶: "<<c2.getRadius()<<", �ܳ�: "<<c2.getCircumference()<<", ���: "<<c2.getArea()<<endl;
		out1<<"c1��c2Բ��֮����룺"<<c1.dist(c2)<<endl;	
		out1<<"c1��c2��С�Ƿ���ȣ�"<<c1.isEqual(c2)<<endl<<endl;
	}
	in1.close();
	out1.close();
	return 0;
}