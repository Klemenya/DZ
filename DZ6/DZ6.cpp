#include <iostream>
#include <fstream>

using namespace std;
FILE *f1, *f2, *f3;

void glue (string &first_f, string &second_f){
   
    std::ifstream file2( second_f );
    file2.seekg(0, std::ios_base::end);
    size_t lenght2 = file2.tellg();
    file2.seekg(0, std::ios_base::beg);
    char* ftext2 = new char [lenght2];
    file2.read(ftext2, lenght2);

    std::ifstream file1( first_f );
    file1.seekg(0, std::ios_base::end);
    size_t lenght1 = file1.tellg();
    file1.seekg(0, std::ios_base::beg);
    char* ftext1 = new char [lenght1];
    file1.read(ftext1, lenght1);

    file1.close();
    file2.close();

    std::ofstream file3( first_f );
    file3.write(ftext1,lenght1);
    file3.write(ftext2,lenght2);

    delete(ftext1);
    delete(ftext2);
    file3.close();

}



int main(){

    char text1[] = "London is the capital of Great Britain, its political, economic and cultural centre.";
    char text2[] = "It's one of the largest cities in the world.";
    std::ofstream f1("first.txt");
    std::ofstream f2("second.txt");
    f1.write(text1,sizeof(text1));
    f2.write(text2,sizeof(text2));
    f1.close();
    f2.close();

    string name1 = "first.txt";
    string name2 = "second.txt";

    glue ( name1, name2 );



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
