/*
�㣨Point�����Ա���£� 
��1�����г�Ա��
Point(float xx, float yy) // ���캯������ʼ�����x, y����
void moveTo(float newX, float newY) // �����x, y�����ƶ���newX, newY
��2��˽�г�Ա��
float x, y   // ��ĺ�����x��������y
�ڴ˻����ϣ�������Σ�Rectangle���࣬���Ա���£�
��1�����г�Ա��
	Rectangle(float xx=0.0,float yy=0.0,float ww=1.0,float hh=1.0) // ���캯������ʼ���������½�����x, y���Լ���w�͸�h
void resetRect(float newX, float newY, float newW, float newH) // ���þ������½�����Ϊ(newX,newY)���Լ���w�͸�h
double getArea() // ���㲢���ؾ��ε����
double getCircumference() // ���㲢���ؾ��ε��ܳ�
bool isSquare() // �ж��Ƿ�Ϊ������
��2��˽�г�Ա��
Point p   // �������½�λ��
float w, h  // ���εĿ�͸� 
���������˵�������Point��Rectangle������Ķ��塣

ע�⣺����Դ�����������������ע�͡�Begin���͡�End��֮����д���ݣ����øĶ�main�������������е��κ����ݡ�
�������
*/
#include<iostream>
#include<fstream>
using namespace std;

/*******Begin*******/
class Point { 
	public:
		Point(float xx,float yy): x(xx), y(yy) { } 	
		void moveTo(float newX, float newY) {x=newX,y=newY; } 	
	private:
		float x,y;
}; 

class Rectangle {
	public:
		Rectangle(float xx=0.0,float yy=0.0,float ww=1.0,float hh=1.0):p(xx,yy) {
			w=ww;
			h=hh;
		}
		void resetRect(float newX,float newY,float newW,float newH) {
			p.moveTo(newX, newY);
			w=newW;
			h=newH;
		}
		double getArea() { return w*h; }
		double getCircumference () { return 2*(w+h); }
		bool isSquare() {
			if(w==h) return true;
			return false;
		}
	private:
		Point p; 
		float w,h;
};




/*******End*********/

int main() {
	float x,y,w,h;
	cin>>x>>y>>w>>h;
	Rectangle rect1(x,y,w,h),rect2;
	cout<<"rect1 ���: "<<rect1.getArea()<<" �ܳ�: "<<rect1.getCircumference()<<endl;
	cout<<"�Ƿ�������: "<<rect1.isSquare()<<endl;
	cout<<"rect2 ���: "<<rect2.getArea()<<" �ܳ�: "<<rect2.getCircumference()<<endl;
	cout<<"�Ƿ�������: "<<rect2.isSquare()<<endl;	
	cin>>x>>y>>w>>h;
	rect2.resetRect(x,y,w,h);
	cout<<"���ú�:\nrect2 ���: "<<rect2.getArea()<<" �ܳ�: "<<rect2.getCircumference()<<endl;
	cout<<"�Ƿ�������: "<<rect2.isSquare()<<endl;

	ifstream in1("4.2.1_1-2_in.dat");
	ofstream out1("4.2.1_1-2_out.dat");
	while(in1>>x>>y>>w>>h) {
		Rectangle rect1(x,y,w,h),rect2;
		out1<<"rect1 ���: "<<rect1.getArea()<<" �ܳ�: "<<rect1.getCircumference()<<endl;
		out1<<"�Ƿ�������: "<<rect1.isSquare()<<endl;
		out1<<"rect2 ���: "<<rect2.getArea()<<" �ܳ�: "<<rect2.getCircumference()<<endl;
		out1<<"�Ƿ�������: "<<rect2.isSquare()<<endl;		
		in1>>x>>y>>w>>h;
		rect2.resetRect(x,y,w,h);
		out1<<"���ú�:\nrect2 ���: "<<rect2.getArea()<<" �ܳ�: "<<rect2.getCircumference()<<endl;
		out1<<"�Ƿ�������: "<<rect2.isSquare()<<endl<<endl;
	}
	in1.close();
	out1.close();
	return 0;
}