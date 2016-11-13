#include <nes.h>

void write_string(char *str)
{
	*((unsigned char*)0x2006) = 0x20;
	*((unsigned char*)0x2006) = 0x44;
	
	while(*str)
	{
		*((unsigned char*)0x2007) = *str;
		str++;
	}
}

void write_string2(char *str)
{
	*((unsigned char*)0x2006) = 0x21;
	*((unsigned char*)0x2006) = 0x44;
	
	while(*str)
	{
		*((unsigned char*)0x2007) = *str;
		str++;
	}
}

void write_string3(char *str)
{
	*((unsigned char*)0x2006) = 0x22;
	*((unsigned char*)0x2006) = 0x44;
	
	while(*str)
	{
		*((unsigned char*)0x2007) = *str;
		str++;
	}
}

int main()
{
	waitvblank();
	
	*((unsigned char*)0x2006) = 0x3f;
	*((unsigned char*)0x2006) = 0x00;
	*((unsigned char*)0x2007) = 1;
	
	*((unsigned char*)0x2006) = 0x3f;
	*((unsigned char*)0x2006) = 0x03;
	*((unsigned char*)0x2007) = 0x30;
	
	write_string("Hello World! RIP Harambe!");
	
	*((unsigned char*)0x2005) = 0x00;
	*((unsigned char*)0x2005) = 0x00;
	
	*((unsigned char*)0x2001) = 8;
	
	while(1);
	
	return 0;
}