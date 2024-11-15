/*
点（Point）类成员如下： 
（1）公有成员：
Point(float xx, float yy) // 构造函数，初始化点的x, y坐标
void moveTo(float newX, float newY) // 将点的x, y坐标移动到newX, newY
（2）私有成员：
float x, y   // 点的横坐标x，纵坐标y
在此基础上，定义矩形（Rectangle）类，其成员如下：
（1）公有成员：
	Rectangle(float xx=0.0,float yy=0.0,float ww=1.0,float hh=1.0) // 构造函数，初始化矩形左下角坐标x, y，以及宽w和高h
void resetRect(float newX, float newY, float newW, float newH) // 重置矩形左下角坐标为(newX,newY)，以及宽w和高h
double getArea() // 计算并返回矩形的面积
double getCircumference() // 计算并返回矩形的周长
bool isSquare() // 判断是否为正方形
（2）私有成员：
Point p   // 矩形左下角位置
float w, h  // 矩形的宽和高 
请根据上述说明，完成Point，Rectangle两个类的定义。

注意：部分源程序给出，仅允许在注释“Begin”和“End”之间填写内容，不得改动main函数和其他已有的任何内容。
试题程序：
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
	cout<<"rect1 面积: "<<rect1.getArea()<<" 周长: "<<rect1.getCircumference()<<endl;
	cout<<"是否正方形: "<<rect1.isSquare()<<endl;
	cout<<"rect2 面积: "<<rect2.getArea()<<" 周长: "<<rect2.getCircumference()<<endl;
	cout<<"是否正方形: "<<rect2.isSquare()<<endl;	
	cin>>x>>y>>w>>h;
	rect2.resetRect(x,y,w,h);
	cout<<"重置后:\nrect2 面积: "<<rect2.getArea()<<" 周长: "<<rect2.getCircumference()<<endl;
	cout<<"是否正方形: "<<rect2.isSquare()<<endl;

	ifstream in1("4.2.1_1-2_in.dat");
	ofstream out1("4.2.1_1-2_out.dat");
	while(in1>>x>>y>>w>>h) {
		Rectangle rect1(x,y,w,h),rect2;
		out1<<"rect1 面积: "<<rect1.getArea()<<" 周长: "<<rect1.getCircumference()<<endl;
		out1<<"是否正方形: "<<rect1.isSquare()<<endl;
		out1<<"rect2 面积: "<<rect2.getArea()<<" 周长: "<<rect2.getCircumference()<<endl;
		out1<<"是否正方形: "<<rect2.isSquare()<<endl;		
		in1>>x>>y>>w>>h;
		rect2.resetRect(x,y,w,h);
		out1<<"重置后:\nrect2 面积: "<<rect2.getArea()<<" 周长: "<<rect2.getCircumference()<<endl;
		out1<<"是否正方形: "<<rect2.isSquare()<<endl<<endl;
	}
	in1.close();
	out1.close();
	return 0;
}