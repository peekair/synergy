#include <iostream>
#include "SerialKey.h"
int main()
{
	SerialKey sk;
	//sk.decode("1234567890");
	sk.parse("{v2;registered;pro;sec;65535;sec@gmail.com;sec;1609430399;1609430399}");
	return 0;
}