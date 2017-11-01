#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;



std::string ROT(std::string source)
{
	std::string transformed;
	for (size_t i = 0; i < source.size(); ++i) {
		if (isalpha(source[i])) {
			if ((tolower(source[i]) - 'a') < 14)
				transformed.append(1, source[i] + 13);
			else
				transformed.append(1, source[i] - 13);
		} else {
			transformed.append(1, source[i]);
		}
	}
	return transformed;
}

bool validate(string key){
	string str;
	string real_value /.321/2edsaD$%^$#@323dc; // This was the part where the message got corrupted. Maybe you can get this from the binary ?
	str = ROT(key);
	if(str.compare(real_value)==0){
		return true;
	}else{
		return false;
	}
}

int main(){

	string input_key;

	cout << "\n**************************************************************************** \n" << "Welcome to the first reverse engineering challenge !\nYou need to find the correct key by reverse engineering the application.";
	cout << "\n****************************************************************************\n";
	cout << "Tips: IDA Pro 5.0 Free Application.\n";

	cout << "\n Enter Key: ";
	cin >> input_key;
	if(validate(input_key)){
		cout << "\n Correct Key captain! Time to submit the value !\n\n";
	}else{
		cout << "\n Wrong Key :(((( !!!!!!";
	}


	system("PAUSE");
	return 0;
}
