#include<iostream>
#include<ctime>
#include<windows.h>


using namespace std;

int main()
{
	char Pilih;
	
	system("color f0");
	
	time_t now = time(0);
	
	tm *ltm = localtime(&now);
	
	cout << "List: \t\t\t\t\t\t\tTime:"
			"\n\n0.Music Player\t5.Jadwal" "\t\t\t\t\tTime: " << ltm->tm_hour << ":"
													  << ltm->tm_min << ":"
													  << ltm->tm_sec << endl
		 <<"1.Steam\t\t6.Localhost" "\t\t\t\t\tDay: " << ltm->tm_mday << endl
		 <<"2.3D\t\t7.Compiler C++" "\t\t\t\t\tMonth: " << ltm->tm_mon << endl
		 <<"3.Cleaner\t8.Virtual" "\t\t\t\t\tYear: " << 1900 + ltm->tm_year << endl
		 <<"4.Anti Virus\t9.Notepad++" << endl << endl;
			
	/*ShellExecute(NULL,
				"open",
				"e:\\Other\\cara\\awal.vbs",
				NULL,
				NULL,
				SW_SHOW);*/
	
	cout << "Pilih yang ingin anda buka: ";
	cin  >> Pilih;
	
	if(Pilih == '0')
	{
		ShellExecute(NULL,
					"open",
					"c:\\Program Files (x86)\\AIMP\\AIMP.exe",
					NULL,
					NULL,
					SW_SHOW);
	}
	
	else if(Pilih == '1')
	{
		ShellExecute(NULL,
					"open",
					"c:\\Program Files (x86)\\Steam\\Steam.exe",
					NULL,
					NULL,
					SW_SHOW);
	}
	
	else if(Pilih == '2')
	{
		ShellExecute(NULL,
					"open",
					"c:\\Program Files\\Blender Foundation\\Blender\\blender.exe",
					NULL,
					NULL,
					SW_SHOW);
	}
	
	else if(Pilih == '3')
	{
		ShellExecute(NULL,
					"open",
					"c:\\Program Files\\CCleaner\\CCleaner.exe",
					NULL,
					NULL,
					SW_SHOW);
	}
	
	else if(Pilih == '4')
	{
		ShellExecute(NULL,
					"open",
					"c:\\Program Files\\ESET\\ESET Smart Security\\egui.exe",
					NULL,
					NULL,
					SW_SHOW);
	}
	
	else if(Pilih == '5')
	{
		ShellExecute(NULL,
					"open",
					"e:\\kuliah.png",
					NULL,
					NULL,
					SW_SHOW);
	}
	
	else if(Pilih == '6')
	{
		ShellExecute(NULL,
					"open",
					"c:\\xampp\\xampp-control.exe",
					NULL,
					NULL,
					SW_SHOW);
	}
	
	else if(Pilih == '7')
	{
		ShellExecute(NULL,
					"open",
					"c:\\Program Files (x86)\\Dev-Cpp\\devcpp.exe",
					NULL,
					NULL,
					SW_SHOW);
	}
	
	else if(Pilih == '8')
	{
		ShellExecute(NULL,
					"open",
					"c:\\Program Files\\Oracle\\VirtualBox\\VirtualBox.exe",
					NULL,
					NULL,
					SW_SHOW);
	}
	
	else if(Pilih == '9')
	{
		ShellExecute(NULL,
					"open",
					"c:\\Program Files\\Notepad++\\notepad++.exe",
					NULL,
					NULL,
					SW_SHOW);
	}
	
	else if(Pilih == 'p')
	{
		system("cls");
		system("ping 8.8.8.8 -t");
	}
	
	else
	{
		system("exit");
	}
	
	/*ShellExecute(NULL,
				"open",
				"e:\\Other\\cara\\akhir",
				NULL,
				NULL,
				SW_SHOW);*/
	
	
	
	return 0;
}
