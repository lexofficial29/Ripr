#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>
#include <vector>

std::unordered_map<char, bool> DEFAULT_CONFIG {
	{'a', false}, // find all occurences
	{'f', false} // find only if it's a word not part of a word
};

std::string stringifyCharv(char input[]) {
	std::string output;
	for(int i = 0; input[i] != '\0'; i++) {
		output += input[i];
	}
	return output;
}

std::vector<std::string> findKey(std::vector<std::string> data, std::string key) {
	std::vector<std::string> keyList;

	for(int i = 0; i < data.size(); ++i) {
		std::cout<<data[i]<<std::endl;
	}

	return keyList;
}

std::vector<std::string> readFile(std::string filename) {
	std::ifstream fin(filename);
	std::vector<std::string> finalOutput;
	std::string buff;
	while(std::getline(fin, buff)) {
		finalOutput.push_back(buff);
	}
	return finalOutput;
}

bool checkOptions(char argument[]) {
	if (argument[0] == '-') {
		for(int i = 1; argument[i] != '\0'; i++) {
			if(DEFAULT_CONFIG.find(argument[i]) != DEFAULT_CONFIG.end()) {
				DEFAULT_CONFIG[argument[i]] = !DEFAULT_CONFIG[argument[i]];
			}
			else {
				std::cout<<"Invalid argument: "<<argument[i]<<std::endl;
				exit(0);
			}
		}
	return true;
	}
	else {
		return false;
	}
}

int main(int argc, char* argv[]) {
	if (argc < 2) {
		std::cout << "Provide an input file!"<<std::endl;
		return 0;
	}

	std::vector<std::string> data = readFile(argv[1]);
	if (argc < 3) {
		std::cout << "Enter key!"<<std::endl;
		return 0;
	}
	
	if(checkOptions(argv[2])) {
		if (argc < 4) {
			std::cout<< "Enter Key!"<<std::endl;
		}
		else {
			findKey(data, stringifyCharv(argv[3]));
		}
	}
	else {
		findKey(data, stringifyCharv(argv[2]));
	}

}