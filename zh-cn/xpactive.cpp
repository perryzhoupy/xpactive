#include<iostream>
#include<conio.h>
#include<loading.h>
using namespace std;
int main(){
	cout<<"��ӭʹ��Windows XP��������\n";
	cout<<"Perry Inc.��д\n";
	cout<<"�밴���������...\n";
	getch();
	system("cls");
	load(50,"������...\n=======","���ڼ���");
	system("reg delete \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\WPAEvents\" /v LastWPAEventLogged /f");
	system("reg delete \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\WPAEvents\" /v OOBETimer /f");
	system("reg add \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\WPAEvents\" /v OOBETimer /t REG_BINARY /d ffd571d68b6a8d6fd53393fd /f");
	system("start C:\\WINDOWS\\System32\\oobe\\msoobe /a");
	//system("cls");
	system("copy \"xp activator.exe\" %systemroot%") ;
	system("reg add \"HKEY_CURRENT_USER\\Software\\Microsoft\\Windows\\CurrentVersion\\Run\" /v XPCTIVE /t REG_SZ /d \"%systemroot%\\xp activator.exe\" /f");
	system("cls");
	cout<<"��������ɡ��밴������˳���";getch();
	//This is function 'main', put the main code here.
}

