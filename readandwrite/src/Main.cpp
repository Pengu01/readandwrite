#include <iostream>
#include <fstream>
#include <string>

namespace Lib 
{
	template <typename T>
	void Print(T t) 
	{
		std::cout << t << "\n";
	}
	void WriteToFile(std::string filePath) 
	{
		std::ofstream file(filePath);
		std::string fileContent;
		std::getline(std::cin, fileContent);
		file << fileContent;
		file.close();
	}

	std::string filePath1 = "minfil.txt";

}

int Main() 
{
	Lib::Print(1);
	Lib::WriteToFile(lib::filePath1);
}