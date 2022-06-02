#pragma once
class Number {
private:
	float *ptr;
	int index;
public:
	Number(int i)
	{
		ptr = new float[i];
		index = i;
	}
	~Number();
	void store();
	float retrieve(int);
	float highest();
	float lowest();
	float average();
	
};