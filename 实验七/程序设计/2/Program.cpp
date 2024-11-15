/*
点（Point）类成员如下：
（1）公有成员：
Point(float xx, float yy)  // 构造函数，初始化点的x, y坐标
float getX() const  // 返回横坐标x
float getY() const  // 返回纵坐标y
void moveTo(float newX, float newY)  // 将点的x, y坐标移动到newX, newY
（2）私有成员：
float x, y  // 点的横坐标，纵坐标
由Point类保护派生出正方形（Square）类，基类Point的x,y成员作为正方形左下角的坐标，并新增如下成员：
（1）公有成员：
Square(float x=0.0,float y=0.0,float len=1.0) // 构造函数，初始化所有数据成员，其中(x,y)为左下角位置，len为边长
float getX() const  // 返回正方形左下角横坐标x
float getY() const  // 返回正方形下角纵坐标y
float getLen() const // 返回正方形的边长
double getArea() const // 返回正方形的面积
void moveTo(float newX, float newY)  // 平移操作，将左下角移动到(newX, newY)
double dist(const Square &s) const // 计算并返回到另一个正方形的距离（左下角之间的距离）
（2）私有成员：
float length  // 正方形的边长

请根据上述说明，完成Point，Square两个类的定义。
注意：部分源程序已给出，仅允许在注释"Begin"和"End"之间填写内容，不得改动main函数和其他已有的任何内容。
试题程序：
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
	cout<<"初始: "<<endl;
	cout<<"s1左下角: ("<<s1.getX()<<", "<<s1.getY()<<")"<<endl;	 
	cout<<"边长: "<<s1.getLen()<<", 面积: "<<s1.getArea()<<endl;
	cout<<"s2左下角: ("<<s2.getX()<<", "<<s2.getY()<<")"<<endl;	 
	cout<<"边长: "<<s2.getLen()<<", 面积: "<<s2.getArea()<<endl;
	cout<<"距离："<<s2.dist(s1)<<endl;	
	cin>>x>>y;
	s2.moveTo(x,y);
	cout<<"平移后: "<<endl;
	cout<<"s2左下角: ("<<s2.getX()<<", "<<s2.getY()<<")"<<endl;	 
	cout<<"边长: "<<s2.getLen()<<", 面积: "<<s2.getArea()<<endl;
	cout<<"距离："<<s2.dist(s1)<<endl;
	
	ifstream in1("7.1.3_5-3_in.dat");
	ofstream out1("7.1.3_5-3_out.dat");
	while(in1>>x>>y>>len) {
		Square s1(x,y,len),s2;
		out1<<"初始: "<<endl;
		out1<<"s1左下角: ("<<s1.getX()<<", "<<s1.getY()<<")"<<endl;	 
		out1<<"边长: "<<s1.getLen()<<", 面积: "<<s1.getArea()<<endl;
		out1<<"s2左下角: ("<<s2.getX()<<", "<<s2.getY()<<")"<<endl;	 
		out1<<"边长: "<<s2.getLen()<<", 面积: "<<s2.getArea()<<endl;
		out1<<"距离："<<s2.dist(s1)<<endl;		
		in1>>x>>y;
		s2.moveTo(x,y);
		out1<<"平移后: "<<endl;
		out1<<"s2左下角: ("<<s2.getX()<<", "<<s2.getY()<<")"<<endl;	 
		out1<<"边长: "<<s2.getLen()<<", 面积: "<<s2.getArea()<<endl;
		out1<<"距离："<<s2.dist(s1)<<endl<<endl;		
	}
	in1.close();
	out1.close();
	return 0;
}