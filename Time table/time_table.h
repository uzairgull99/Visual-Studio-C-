#pragma once


void TimeTableGenrator::Dispaly()
{
	cout << "______________________________" << endl;
	cout << "                             !!!!------Time Table--------!!!!" << endl;
	cout << "______________________________" << endl;
	cout << "                            Department Name= " << depName << endl;
	cout << "______________________________" << endl;
	cout << "Sujects         :";
	for (int i = 0; i < num; i++)
	{
		cout << NameOfsub[i] << "      ";
	}
	cout << endl;
	cout << "Starting Time   :";
	for (int i = 0; i < num; i++)
	{
		cout << Starting_time[i] << "      ";
	}
	cout << endl;
	cout << "Ending Time     :";
	for (int i = 0; i < num; i++)
	{
		cout << Ending_time[i] << "      ";
	}
	cout << endl;
	cout << "Rooms           :";
	int z;
	z = int(numberOFRooms);
	for (int i = 0; i < num; i++)
	{
		cout << rand() % z << "             ";
	}
	cout << endl;
	cout << "______________________________" << endl;
}