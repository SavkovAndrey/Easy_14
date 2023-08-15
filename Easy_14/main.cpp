#include <iostream>
#include <time.h>
#include <string>
#include <fstream>

using namespace std;
//---------------------Функции и Прототипы---------------------------------------





//------------------------MAIN----------------------------------------------------
int main() {
	setlocale(LC_ALL, "RU");
	srand(time(NULL));
	//-------------------------------САМА ПРОГА-------------------------------------

	string path = "test.txt";

	//string msg;
	char ch;

	fstream fs;

	int count = 1;

	fs.open(path, fstream::in | fstream::out );

	if (!fs.is_open())
	{
		cout << "Ошибка открытия файла!" << endl;
	}

	else
	{
		cout << "Файл открыт для обработки! " << endl;
		while (!fs.eof())
		{
			ch = '\0';
			fs.get(ch);                   // по символам считываем
			
			
			//msg = "";
			// fs >> msg;                  // Считывает по СЛОВАМ!!! 
			if (ch == '\n')
			{
				count++;
			}
			else if (ch == '#')
			{
				cout << "В данном тексте содержится  " << count << " строк" << endl << endl;
			}
		}




	}


	fs.close();

	system("pause");

	return 0;
}
