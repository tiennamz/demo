#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
#include <conio.h>
#include<ctime>
#include <vector>
#include "windows.h" 
using namespace std;

 //Hello Linh 
 //cho m xem may cai nay chay ra gi nhe.
 //Nhin chac k hieu gi dung k ?
 //t biet ma nhung k can biet dau .
//thuong thuc diii.
void SetColor(WORD color)
{
	HANDLE hConsoleOutput;
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);

	CONSOLE_SCREEN_BUFFER_INFO screen_buffer_info;
	GetConsoleScreenBufferInfo(hConsoleOutput, &screen_buffer_info);

	WORD wAttributes = screen_buffer_info.wAttributes;
	color &= 0x000f;
	wAttributes &= 0xfff0;
	wAttributes |= color;

	SetConsoleTextAttribute(hConsoleOutput, wAttributes);
}


int main()
{
	string Tien_Nam;
	while (true)
	{
		system("cls");
		cout << endl << endl;
		cout << "\t\tBan muon nhap ten ai ? ";
		getline(cin,Tien_Nam);

		if (Tien_Nam == "Tien Nam")
		{
			cout << "\t\t Loading ..." << endl <<endl;
			
			Sleep(1000);
			cout << "\t\tChuc Nam " << endl; Sleep(1000);
			cout << "\t\tsang tuoi moi co that nhieu suc khoe" << endl; Sleep(1000);
			cout << "\t\tde duoc tung tang di an choi nha!" << endl; Sleep(1000);
			
            cout << "\t\t:=.=.=.=.=.=.=" << endl;Sleep(1000);
			vector <int> A;
			A.push_back(7);
			A.push_back(12);
			A.push_back(14);
			A.push_back(50);
			while(true)
			{
				int i = 0;
				SetColor(A.at(i++ % A.size()));

				ifstream file;
				file.open("D:\\Download\\banner.txt", ios_base::in);
				string line;
				while (getline(file, line)) {
					cout << line << endl;
					Sleep(30); 
				}
				file.close();

				SetColor(A.at(i++ % A.size()));

			
				ifstream file2;
				file2.open("D:\\Download\\banner (1).txt", ios_base::in);
				string line2;
				while (getline(file2, line2)) {
					cout << line2 << endl;
					Sleep(30); 
				}
				file2.close();
				SetColor(A.at(i++ % A.size()));
				ifstream file3;
				file3.open("D:\\Download\\banner (1).txt", ios_base::in);
				string line3;
				while (getline(file3, line3)) {
					cout << line3 << endl;
					Sleep(30); 
				}
				file3.close(); 

				SetColor(A.at(i++ % A.size()));
				ifstream file4;
				file4.open("D:\\Download\\banner (1).txt", ios_base::in);
				string line4;
				while (getline(file4, line4)) {
					cout << line4 << endl;
					Sleep(30); 
				}
				file4.close(); break;
			}
			_getch();
		}
		else
		{
			cout << "\t\tSAI ROI ;((" << endl << endl;
			system("pause");
		}
	}
}
