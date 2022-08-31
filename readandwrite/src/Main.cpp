#include <iostream>
#include <fstream>
#include <string>

namespace Lib 
{
	template <typename T>
	//Template print function
	void Print(T t) 
	{
		std::cout << t << "\n";
	}
	//Writes to textfile
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
	Lib::WriteToFile(Lib::filePath1);
}