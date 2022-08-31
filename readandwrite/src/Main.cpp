#include <iostream>

namespace Lib 
{
	template <typename T>
	void Print(T t) 
	{
		std::cout << t << "\n";
	}
}

int Main() 
{
	Lib::Print(1);
}