// ConsoleApplication68.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <thread>
#include <vector>

bool func(std::vector<int>* v, std::ofstream* out) {

    for(auto i : *v){

        for (auto j : *v) {
        
            if ((i+j) == 2020) {

                //*out << i << std::endl;
               // *out << j << std::endl;
            
                *out << i * j << std::endl;

                out->close();

                return 0;
            }
        }    
    }
}

int main()
{
    std::ifstream file;
    file.open("data.txt");

    std::ofstream out;
    out.open("result.txt");

    if (!file.is_open()) {
        out << "ERROR";
        out.close();
    }
    else {

        long long i;

        std::vector<int> v;

        while (!file.eof()) {
            file >> i;
            v.push_back(i);   
        }

        func(&v, &out);

        if (v.size() > 100) {
        
                
        }

    }


    /*
    std::thread TR_1;
    std::thread TR_2;

    TR_1.join();
    */
    //TR_2.join();
    //std::cout << "Hello World!\n";
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
