#include <iostream>
#include <time.h>
#include <string>
#include <fstream>

using namespace std;
//---------------------������� � ���������---------------------------------------





//------------------------MAIN----------------------------------------------------
int main() {
	setlocale(LC_ALL, "RU");
	srand(time(NULL));
	//-------------------------------���� �����-------------------------------------

	string path = "test.txt";

	//string msg;
	char ch;

	fstream fs;

	int count = 1;

	fs.open(path, fstream::in | fstream::out );

	if (!fs.is_open())
	{
		cout << "������ �������� �����!" << endl;
	}

	else
	{
		cout << "���� ������ ��� ���������! " << endl;
		while (!fs.eof())
		{
			ch = '\0';
			fs.get(ch);                   // �� �������� ���������
			
			
			//msg = "";
			// fs >> msg;                  // ��������� �� ������!!! 
			if (ch == '\n')
			{
				count++;
			}
			else if (ch == '#')
			{
				cout << "� ������ ������ ����������  " << count << " �����" << endl << endl;
			}
		}




	}


	fs.close();

	system("pause");

	return 0;
}
