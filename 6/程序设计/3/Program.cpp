/*
ѧ����Stu����Ҫ���ڴ���ĳ��ѧ���ĳɼ�����Ҫ��Ա���£�
��1��˽�г�Ա��
long number   // ѧ��ѧ�� 
string name    // ѧ������ 
int n          // �γ�����
float *score   // ����ָ�򱣴�ѧ���ɼ�������
float average  // ���пγ̳ɼ���ƽ���� 
int count      // ������<60)�Ŀγ�����
��2�����г�Ա��
Stu(int n)  // ���캯������̬����һ������Ϊn�����飬����ֵ����score������count��average��ʼ��Ϊ0
~Stu()      // ����������ɾ���ɼ����� 
void input()      // ��������ѧ����ѧ�š������Լ�n�ſγ̵ĳɼ� 
void process()  // ͳ��ѧ�����пγ̵�ƽ���֣��Լ�������Ŀγ����� 
void print()      // ���ѧ����ѧ�š�������ƽ�����Լ�������γ���
���������˵�������Stu��Ķ��塣

ע�⣺����Դ�����������������ע��"Begin"��"End"֮����д���ݣ����øĶ�main�������������е��κ����ݡ�
�������
*/
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class Stu {
		long number;   // ѧ��ѧ�� 
		string name;   // ѧ������ 
		int n;         // �γ�����
		float *score;  // ����ָ�򱣴�ѧ���ɼ�������
		float average; // ���пγ̳ɼ���ƽ���� 
		int count;     // ������<60)�Ŀγ�����
	public:
		Stu(int n); // ���캯������̬����һ������Ϊn�����飬����ֵ����score������count��average��ʼ��Ϊ0
		~Stu();     // ����������ɾ���ɼ����� 
		void input();    // ��������ѧ����ѧ�š������Լ�n�ſγ̵ĳɼ� 
		void process();  // ͳ��ѧ�����пγ̵�ƽ���֣��Լ�������Ŀγ�����
		void print() {   // ���ѧ����ѧ�š�������ƽ�����Լ�������γ���
			cout<<"ѧ�ţ�"<<number<<"   ������"<<name<<endl;
			cout<<"ƽ���֣�"<<average<<" ����������"<<count<<endl;
		}  
};  

/*******Begin*******/
Stu::Stu(int n) {
	this->n=n;
	score=new float[n];
	count=0;
	average=0;
} 
Stu::~Stu(){ delete[] score; }   
void Stu::input() {
	cin>>number>>name;
	for(int i=0;i<n;i++) cin>>score[i];
}    
void Stu::process() {
	for(int i=0; i<n; i++) {
		if(score[i]<60) count++;
		average+=score[i];
	}
	average/=n;
}





/*******End*********/

int main() {
	int n;
	cin>>n;
	Stu s(n);
	s.input();
	s.process();
	s.print();

	ifstream in1("6.6.1_2_in.dat");
	ofstream out1("6.6.1_2_out.dat");
	streambuf *cinbackup;
	streambuf *coutbackup;
	cinbackup=cin.rdbuf(in1.rdbuf());
	coutbackup=cout.rdbuf(out1.rdbuf());	
	while(cin>>n) {
		Stu s(n);
		s.input();
		s.process();
		s.print();
	}	
	cin.rdbuf(cinbackup);
	cout.rdbuf(coutbackup);
	in1.close();
	out1.close();
	return 0;
}
