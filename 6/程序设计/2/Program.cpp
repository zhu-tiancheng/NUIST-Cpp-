/*
�γ̣�Course������Ҫ���ڴ洢ĳ�ſγ̵Ļ�����Ϣ�Ϳ��Գɼ�����ͳ�Ƹÿγ̵���߷֡���ͷ֡�ƽ���ֺͲ������ѧ��������
Course��ĳ�Ա�����Ѹ����������ע�ͣ����Course��Ķ��塣

ע�⣺����Դ�����������������ע��"Begin"��"End"֮����д���ݣ����øĶ�main�������������е��κ����ݡ�
�������
*/
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class Course {
		int number;    // �γ̱�� 
		string name;   // �γ����� 	
		int credit;    // �γ�ѧ��
		int n;         // ѡ�޿γ̵�ѧ������
		float *score;  // ָ�򱣴�ѧ���ɼ������� 
		int max,min;   // �γ̵���߷֡���ͷ�
		float average; // �γ̵�ƽ����
		int count;     // ������<60����ѧ������
	public:
		Course(int n);   // ���캯������̬����һ������Ϊn�����飬����ֵ����score��nΪѧ������ 
		Course(const Course &c); // ʵ�ֶ�������
		~Course();       // ����������ɾ���ɼ�����
		void input();    // ��������γ̱�š��γ����ơ��γ�ѧ�֣��Լ�n��ѧ���ĳɼ� 
		void process();  // ����γ̵���߷֡���ͷ֡�ƽ���֣��Լ��������ѧ������
		void print() {   // ����γ̱�š��γ����ơ��γ�ѧ�֡���߷֡���ͷ֡�ƽ�����Լ�������ѧ����
			cout<<"�γ̱�ţ�"<<number<<endl;
			cout<<"�γ����ƣ�"<<name<<" �γ�ѧ�֣�"<<credit<<endl;
			cout<<"��߷֣�"<<max<<" ��ͷ֣�"<<min<<" ƽ���֣�"<<average<<" ����������"<<count<<endl<<endl;
		}  
};  

/*******Begin*******/
Course::Course(int n) {
	this->n=n;
	score=new float[n];	
} 
Course::Course(const Course &c) {
	number=c.number;name=c.name,credit=c.credit;
	n=c.n,max=c.max,min=c.min,count=c.count,average=c.average;
	score=new float[n];
	for(int i=0;i<n;i++)
		score[i]=c.score[i];
}
Course::~Course(){ delete[] score; }    
void Course::input() {
	cin>>number>>name>>credit;
	for(int i=0; i<n; i++) cin>>score[i];
}    
void Course::process() {
	max=min=score[0], count=0,average=0;
	for(int i=0; i<n; i++) {
		if(max<score[i]) max=score[i];  
		if(min>score[i]) min=score[i]; 
		if(score[i]<60) count++;
		average+=score[i];
	}
	average/=n;
}





/*******End*********/

int main() {
	int n;
	cin>>n;
	Course c1(n);
	c1.input();c1.process();c1.print();
	Course c2(c1);c2.print();

	ifstream in1("6.6.2_3_in.dat");
	ofstream out1("6.6.2_3_out.dat");
	streambuf *cinbackup;
	streambuf *coutbackup;
	cinbackup=cin.rdbuf(in1.rdbuf());
	coutbackup=cout.rdbuf(out1.rdbuf());	
	while(cin>>n) {
		Course c1(n);
		c1.input();c1.process();c1.print();
		Course c2(c1);c2.print();
	}	
	cin.rdbuf(cinbackup);
	cout.rdbuf(coutbackup);
	in1.close();
	out1.close();
	return 0;
}
