#include<iostream>
#include <windows.h>
#include"KeyToggle.h"
KeyToggle tNumpadZero(0x60);
KeyToggle tZero(0x30);		
KeyToggle tA(0x41);			
int i = 1;
void main(void)
{
	while (i!= 0) {
		if (tNumpadZero) { std::cout << "num0" << std::endl;
		i = 0; 
		} 
		if (tZero) {std::cout << "0" << std::endl;} 
		if (tA) { std::cout << "a" << std::endl;}
	}
}