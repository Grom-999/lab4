#include <iostream>
#include <array>
#include <random>
#include <cmath>
#include <vector>

void T()
{

    std::array<float , 10> arr = {};

    std::cout<< "An array filled with values = option number : "<<std::endl;
    //Массив, заполненный значениями = номеру варианта

    for (float &a: arr)
    {
        a = 11;
        std::cout << a << " ";
    }

    std::cout<<'\n'<<'\n';

    std::random_device rd;

    std::cout<< "Array elements filled in range [-10;10] : "<<std::endl;
    //Элементы массива заполнены в диапазоне [-10; 10]


    for (auto &a: arr)
    {
        int b = ((rd() % 21) - 10);
        a = b;
        std::cout << a << " ";

    }


    std::cout<< "\n"<<"\n";


    std::vector<float> vec(arr.begin(),arr.end());
    std::cout<< "Copy values from an array in a vector : "<<std::endl;
    //Копирование значений из массива в вектор

    for (auto &a: vec)
    {
        std::cout << a << " ";
    }

    std::cout<<'\n'<<'\n';


    std::cout<< "Array elements in Cuba : "<<std::endl;  //Элементы массива в Кубе
    int s;
    for (auto &a : vec)
    {
        a = pow(a,3);

        std::cout<< a << " ";
    }


    std::cout<<'\n'<<'\n';

    std::cout<< "The sum of the elements of the array in Cuba : "<<std::endl;
    //Сумма элементов массива в Кубе

    int q;
    for (auto &a: vec)
    {
        q+=a;
    }
    std::cout<< q << " ";

    std::cout<<'\n'<<'\n';

    std::cout<< "If 1 (0) array element> 2, then we remove it : "<<std::endl;
    //удаление первого элемента из вектора превышающего 2

    if(vec[0]>2)
    {
        vec.erase(vec.begin());
    }

    for (auto &a: vec)
    {
        std::cout<<a<<" ";
    }

    std::cout<<'\n'<<'\n';

    std::cout<< "We remove the value that will be sessing from 0 to 3 : "<<std::endl;
    //Удаляем значение, стоящие с 0 по 3

    vec.erase(vec.begin(),vec.begin()+3);

    for (auto &a: vec)
    {
        std::cout<<a<<" ";
    }

    std::cout<<'\n'<<'\n';

    std::cout << "adding 2 values equal to 7.3 starting from the third from the end : "<<std::endl;
    //добавляем 2 значения, равные 7,3, начиная с третьего с конца

    auto iter = vec.cend();
    vec.insert(iter-2,2, 7.3);

    for (auto &a: vec)
    {
        std::cout<<a<<" ";
    }

    std::cout<<'\n'<<'\n';

    std::cout<< "division of each element of the vector by the difference between the last and the first elements of the vector : "<<std::endl;
    //деление каждого элемента вектора на разницу между последним и первым элементами вектора

    double first=vec.front();
    double last =vec.back();
    for (auto &a: vec)
    {
        a = a/(last-first) ;
        std::cout<< a << " ";
    }

    std::cout<<'\n'<<'\n';

    std::cout<< "adding element = variant number to the end of the vector : "<<std::endl; //добавление варианта в конец вектора
    vec.emplace_back(11);

    for (auto &a: vec)
    {
        std::cout<<a<<" ";
    }

    std::cout<<'\n'<<'\n';

   int v = vec.size();
   std::cout<< "the number of elements in the vector : " << v << std::endl; //количество элементов в векторе

    }

void T2()
{
    std::cout<< "enter an arbitrary string : "<<std::endl; //ввод строки
    std::string str;
    std::getline(std::cin,str);
    std::cout<<"line output : "<< " " << str <<std::endl; // вывод введенной строки

    std::cout << "line length : " << " " <<str.length() <<std::endl; // длинна строки

    size_t count=0;
    for (int i = 0; i < str.length(); ++i)
    {
        switch (str[i])
        {
            case 'b' : ++count; break;
            case 'c' : ++count; break;
            case 'd' : ++count; break;
            case 'f' : ++count; break;
            case 'g' : ++count; break;
            case 'h' : ++count; break;
            case 'j' : ++count; break;
            case 'k' : ++count; break;
            case 'l' : ++count; break;
            case 'm' : ++count; break;
            case 'n' : ++count; break;
            case 'p' : ++count; break;
            case 'q' : ++count; break;
            case 'r' : ++count; break;
            case 's' : ++count; break;
            case 't' : ++count; break;
            case 'v' : ++count; break;
            case 'w' : ++count; break;
            case 'x' : ++count; break;
            case 'z' : ++count; break;

        }
    }

    std::cout <<"the number of consonants in a line : " << count<<std::endl;   // кол-во строчных согласных

    double p = (double)count/(str.length())*100;

std::cout<< "proportion of lowercase latin consonants in a line : " << p << " %" <<std::endl;
//доля строчных согласных в строке


int L1;
int L2;

std::cout<< "enter L1 : "; //введите L1
std::cin>> L1;
std::cout<< "enter L2 : "; //введите L2
std::cin>> L2;

    std::string str2 = str.substr (L1,L2);

std::cout<< "substring from L1 to L2 : " << str2 << std::endl << std::endl;
// подстрока с L1 по L2


std::cout << "an offer is given \'Can you can a can as a canner can can a can?\'. change can to any word : ";
// дано предложение "Can you can a can as a canner can can a can?" измените can на любое слово

    std::string str3 = "can you can a can as a canner can can a can?" ;
    std::string rep;

    std::cin >> rep;

    if(rep != "can")
    {
        size_t pos = str3.find("can");
        while(pos!=std::string::npos)
        {
            str3.replace(pos,3,rep);
            pos = str3.find("can");
        }
    }


    std::cout<< "modified proposal : " << str3 << std::endl;
    //измененное предложение




}






int main()
{
    //T();
    //T2();
}


