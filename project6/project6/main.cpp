#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <locale.h>
#include <string.h>
#include <vector>
using namespace std;

struct ELEMENT
{
	int key;
	char value[30];
	//std::string value;
};

class Massive
{
public:
	std::vector<ELEMENT> Mass;
	// �������� ������
	Massive() {}
	~Massive();
	void add();
	void OnScreen();
	void ReadFromFile();
	void DelFromMasive();
	void copy();
	void LookForValue();
	
};

void Massive::DelFromMasive()
{
	int k;
	cout << "������� ����, �������� �������� ������ �������" << endl;
	cin >> k;
	int j;
	j = 0;
	for (int i = 0; i < Mass.size(); i++)
	{
		if (Mass[i].key == k)
		{
			Mass.erase(Mass.begin() + i);
			j = j + 1;
		}

	}
	if (j == 0) cout << "�������� � ����� ������ ���� �� ����������" << endl;
}

/*void copy(Massive S)
{

	vector<ELEMENT> M = S;
}*/

	void Massive::add()
{
		ELEMENT s; int j = 0;
		cout << "������� ����: ";
		cin >> s.key;
		//cin.ignore();
		cout << "������� ��������: ";
		cin >> s.value;

		for (int i = 0; i < Mass.size(); i++)
		{
			if (Mass[i].key == s.key)
			{
				Mass.erase(Mass.begin() + i);
				Mass.push_back(s);
				j = 1;
			}
		}
		if (j == 0) Mass.push_back(s);
			
//ELEMENT tmp = { p.key, p.value };
}

	void Massive::LookForValue()
	{
		int key,j,i;
		cout << "������� ���� ��� ������ �����. ��������: ";
		cin >> key;
		for (int i = 0; i < Mass.size(); i++)
		{
			if (Mass[i].key == key)
			{
				cout << "�������� �������: " << Mass[i].value<<endl;
				j = 1;
			}

		}
		if (j == 0) cout << "�������� � ����� ������ ���� �� ����������" << endl;

	}

void Massive :: OnScreen()
{
	for (int i = 0; i < Mass.size(); i++)
		cout << Mass[i].key << "-" << Mass[i].value << endl;
}

int main(void)
{
	setlocale(LC_ALL, "Russian");
	Massive N,S;
	int t;
	N.add();
	N.OnScreen();
	N.DelFromMasive();
	N.OnScreen();
	N.LookForValue();
	//N.copy(S);
	cout << "end";
	system("pause");
	return 0;
	//list();

	/*
	setlocale(LC_ALL, "Russian");
	ifstream in("in.txt");
	if (!in.is_open())
	{
	cout << "���� in.txt �� ����������" << endl;
	return -1;
	}
	ofstream out("out.txt");
	if (!out.is_open())
	{
	cout << "���������� ������� �������� ���� out.txt" << endl;
	return -2;
	}








	while (!in.eof())
	{

	}*/
}