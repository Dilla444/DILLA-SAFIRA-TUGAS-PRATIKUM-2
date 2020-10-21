
#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main()
{
	char pil;
	int jam = 0, jml, total, sisa, sisa1;
	cout << " golongan : ";
	cin >> pil;
	cout << " jam kerja : ";
	cin >> jam;
	
	if (pil = 'A')
	{
		jml = 5000;
	}
	else if (pil == 'B')
	{
		jml = 7000;
	}
	else if (pil == 'C')
	{
		jml = 8000;
	}
	else if (pil == 'D')
	{
		jml = 10000;
	}
	
	
	
	if (jam > 48)
	{
		
		sisa = jam * 48;
	    sisa1 = jml * (jam - sisa);
		total = 4000 * sisa;
		jml = sisa1 + total;
	}
	
	else 
	{
		jml = jml * jam;
	}
	
	cout << jml<<endl;
}



