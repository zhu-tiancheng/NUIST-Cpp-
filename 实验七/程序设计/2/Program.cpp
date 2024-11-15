/*
�㣨Point�����Ա���£�
��1�����г�Ա��
Point(float xx, float yy)  // ���캯������ʼ�����x, y����
float getX() const  // ���غ�����x
float getY() const  // ����������y
void moveTo(float newX, float newY)  // �����x, y�����ƶ���newX, newY
��2��˽�г�Ա��
float x, y  // ��ĺ����꣬������
��Point�ౣ�������������Σ�Square���࣬����Point��x,y��Ա��Ϊ���������½ǵ����꣬���������³�Ա��
��1�����г�Ա��
Square(float x=0.0,float y=0.0,float len=1.0) // ���캯������ʼ���������ݳ�Ա������(x,y)Ϊ���½�λ�ã�lenΪ�߳�
float getX() const  // �������������½Ǻ�����x
float getY() const  // �����������½�������y
float getLen() const // ���������εı߳�
double getArea() const // ���������ε����
void moveTo(float newX, float newY)  // ƽ�Ʋ����������½��ƶ���(newX, newY)
double dist(const Square &s) const // ���㲢���ص���һ�������εľ��루���½�֮��ľ��룩
��2��˽�г�Ա��
float length  // �����εı߳�

���������˵�������Point��Square������Ķ��塣
ע�⣺����Դ�����Ѹ�������������ע��"Begin"��"End"֮����д���ݣ����øĶ�main�������������е��κ����ݡ�
�������
*/
#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;

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
	float x,y,len;
	cin>>x>>y>>len;
	Square s1(x,y,len),s2;
	cout<<"��ʼ: "<<endl;
	cout<<"s1���½�: ("<<s1.getX()<<", "<<s1.getY()<<")"<<endl;	 
	cout<<"�߳�: "<<s1.getLen()<<", ���: "<<s1.getArea()<<endl;
	cout<<"s2���½�: ("<<s2.getX()<<", "<<s2.getY()<<")"<<endl;	 
	cout<<"�߳�: "<<s2.getLen()<<", ���: "<<s2.getArea()<<endl;
	cout<<"���룺"<<s2.dist(s1)<<endl;	
	cin>>x>>y;
	s2.moveTo(x,y);
	cout<<"ƽ�ƺ�: "<<endl;
	cout<<"s2���½�: ("<<s2.getX()<<", "<<s2.getY()<<")"<<endl;	 
	cout<<"�߳�: "<<s2.getLen()<<", ���: "<<s2.getArea()<<endl;
	cout<<"���룺"<<s2.dist(s1)<<endl;
	
	ifstream in1("7.1.3_5-3_in.dat");
	ofstream out1("7.1.3_5-3_out.dat");
	while(in1>>x>>y>>len) {
		Square s1(x,y,len),s2;
		out1<<"��ʼ: "<<endl;
		out1<<"s1���½�: ("<<s1.getX()<<", "<<s1.getY()<<")"<<endl;	 
		out1<<"�߳�: "<<s1.getLen()<<", ���: "<<s1.getArea()<<endl;
		out1<<"s2���½�: ("<<s2.getX()<<", "<<s2.getY()<<")"<<endl;	 
		out1<<"�߳�: "<<s2.getLen()<<", ���: "<<s2.getArea()<<endl;
		out1<<"���룺"<<s2.dist(s1)<<endl;		
		in1>>x>>y;
		s2.moveTo(x,y);
		out1<<"ƽ�ƺ�: "<<endl;
		out1<<"s2���½�: ("<<s2.getX()<<", "<<s2.getY()<<")"<<endl;	 
		out1<<"�߳�: "<<s2.getLen()<<", ���: "<<s2.getArea()<<endl;
		out1<<"���룺"<<s2.dist(s1)<<endl<<endl;		
	}
	in1.close();
	out1.close();
	return 0;
}