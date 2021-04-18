#include <iostream>
#include <fstream>

using namespace std;
FILE *f1, *f2, *f3;

int main(){

    char text1[] = "London is the capital of Great Britain, its political, economic and cultural centre.";
    char text2[] = "It's one of the largest cities in the world.";
    std::ofstream f1("first.txt");
    std::ofstream f2("second.txt");

    f1.write(text1,sizeof(text1));
    f2.write(text2,sizeof(text2));

    f1.close();
    f2.close();

    std::ifstream f3("second.txt");
    f3.seekg(0, std::ios_base::end);
    size_t lenght = f3.tellg();
    f3.seekg(0, std::ios_base::beg);

    char* ftext = new char [lenght];

    f3.read(ftext, lenght);
    f2.open("first.txt", std::ios::app);
    f2 << ftext;
    delete(ftext);
    f2.close();


    string word_s;
    std::cout << "Enter a search word: ";
    std::cin >> word_s;

    string name_f;
    std::cout << "Enter file name: ";
    std::cin >> name_f;

    ifstream file_s(name_f);
    if (file_s.is_open()) {
        string line;

        while (getline(file_s, line)) {
            if (line.find(word_s) != string::npos)
                std::cout << "Word \'" << word_s << "\' IS PRESENT in the file \'" << name_f <<"\'" << std::endl;
            else
                std::cout << "Word \'" << word_s << "\' is NOT present in the file \'" << name_f <<"\'" << std::endl;
        }
    }
    else
        std::cout << "Error opening file or File not found." << endl;


return 0;
}
