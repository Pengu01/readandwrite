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
	//Reads from textfile
	void ReadFromFile(std::string filePath)
	{
		std::ifstream openFile(filePath);
		std::string fileContent;
		while (std::getline(openFile, fileContent)) 
		{
			std::cout << "Filecontent: " << fileContent << "\n";
		}
		openFile.close();
	}

	std::string filePath1 = "minfil.txt";

}

int main() 
{
	Lib::Print(1);
	Lib::WriteToFile(Lib::filePath1);
	Lib::ReadFromFile(Lib::filePath1);
}