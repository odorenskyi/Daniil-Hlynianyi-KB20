#include <conio.h>
#include <iostream>
#include <fstream>
#include <string.h>
#include <windows.h>
#include <clocale>
#include <string>
#include <vector>

using namespace std;

struct Student{
    string PIB = " ";
    string date_birth = " ";
    string place_birth = " ";
    string nationality =" ";
    string zakladendofstudy = " ";
    string yearendofstudy = " ";
    string family_stan = " ";
    string place_live = " ";
    string pilgi = " ";
    string zaraxovan = " ";
} obj;

vector <struct Student> write;
char filename[] = "dekanat.txt";
string line = "";
ifstream Infile;
ofstream Outfile;


void Outfilefile(){

     Infile.open(filename, ios_base::in);

     int iter = 0;
     while(!Infile.eof()){
        getline(Infile, line);
        if(line.length() > 1){
                write.push_back(obj);
                write[iter].PIB = line;
                getline(Infile, write[iter].date_birth);
                getline(Infile,  write[iter].place_birth);
                getline(Infile,  write[iter].nationality);
                getline(Infile,  write[iter].zakladendofstudy);
                getline(Infile,  write[iter].yearendofstudy);
                getline(Infile,  write[iter].family_stan);
                getline(Infile,  write[iter].place_live);
                getline(Infile,  write[iter].pilgi);
                getline(Infile,  write[iter].zaraxovan);
        }
        iter++;
     }
     Infile.close();
 }

void Screenshow(){
     for(int i = 0; i < write.size(); i++){
        cout << write[i].PIB << endl;
        cout << write[i].date_birth << endl;
        cout << write[i].place_birth << endl;
        cout << write[i].nationality << endl;
        cout << write[i].zakladendofstudy << endl;
        cout << write[i].yearendofstudy << endl;
        cout << write[i].family_stan << endl;
        cout << write[i].place_live << endl;
        cout << write[i].pilgi<< endl;
        cout << write[i].zaraxovan<< endl;
     }
     system("pause");
}

void updater(){

     Outfile.open(filename, ios_base::trunc | ios_base::out);
     for(int j = 0; j < write.size(); j++){
            Outfile  << write[j].PIB << endl
                     << write[j].date_birth << endl
                     << write[j].place_birth << endl
                     << write[j].nationality << endl
                     << write[j].zakladendofstudy << endl
                     << write[j].yearendofstudy << endl
                     << write[j].family_stan << endl
                     << write[j].place_live << endl
                     << write[j].pilgi << endl
                     << write[j].zaraxovan << endl;
     }
     Outfile.close();
 }


 void numbers(){
    cout << "В базi даним мiстяться такi студенти:" << endl;
    for(int i = 0; i < write.size(); i++){
        cout << i << ":" << write[i].PIB <<endl;
    }
 }


 void Addstudent(){
    write.push_back(obj);
    cout << "Введiть iнформацiю про нового студента." << endl;
    getline(cin, line);
    cout << "ПIБ студента: ";
    getline(cin, line);
    write[write.size() - 1].PIB = line;

    cout << "Дата народження студента: ";

    getline(cin, line);
    write[write.size() - 1].date_birth = "    " + line;

    cout << "Мiсце народження студента: " ;
    getline(cin, line);
    write[write.size() - 1].place_birth = "    " + line;

    cout << "Нацiональнiсть студента: ";
    getline(cin, line);
    write[write.size() - 1].nationality = "    " + line;

    cout << "Найменування навчального закладу який окiнчив студент: ";
    getline(cin, line);
    write[write.size() - 1].zakladendofstudy = "    " + line;

    cout << "Дата закiнчення студентом вуза: ";
    getline(cin, line);
    write[write.size() - 1].yearendofstudy = "    " + line;

    cout << "Сiмейний стан студента: ";
    getline(cin, line);
    write[write.size() - 1].family_stan = "    " + line;

    cout << "Мiсце проживання студента: ";
    getline(cin, line);
    write[write.size() - 1].place_live = "    " + line;

    cout << "Пiльги студента: ";
    getline(cin, line);
    write[write.size() - 1].pilgi = "    " + line;

    cout << "Студент зарахований(а) наказом вiд: ";
    write[write.size() - 1].zaraxovan = "    " + line;
    getline(cin, line);
    system("pause");

 }

void Findstudent(){
     numbers();
     int find_Elem;
     cout << "Введiть iндекс для знаходження стдента: " ;
     cin >> find_Elem;

     for(int i = 0; i < write.size(); i++)
     {
        if(find_Elem == i)
        {
            cout << "Результати пошуку в реєстрi: " << endl;
            cout << "ПІБ:"<< write[i].PIB << endl;
            cout << "Дата народження:" << write[i].date_birth << endl;
            cout << "Місце народження:" << write[i].place_birth << endl;
            cout << "Національність:" << write[i].nationality << endl;
            cout << "Найменування навчального закладу який окiнчив студент:" << write[i].zakladendofstudy << endl;
            cout << "Дата закiнчення студентом вуза:" << write[i].yearendofstudy << endl;
            cout << "Сiмейний стан:" << write[i].family_stan << endl;
            cout << "Мiсце проживання:" << write[i].place_live << endl;
            cout << "Пiльги:" << write[i].pilgi << endl;
            cout << "Студент зарахований(а) наказом вiд:" << write[i].zaraxovan<< endl;
            break;
        }
        else if(find_Elem >= write.size()){
            cout << "Не вдалося знайти студента за даним iндексом" << endl;
            break;
        }

    }

    system("pause");
 }


void Delstudent(){

    numbers();

    int del_elem;
    cout << "Введiть iндекс для видалення певного студента: ";
    cin >> del_elem;
    if(del_elem < write.size()){
        write.erase(write.begin() + del_elem);
        cout << "Студента було видалено з бази даних" << endl;
    }
    else{
        cout << "Не вдалося знайти студента за даним iндексом" << endl;
    }

    system("pause");
}


int main(){
    if(!Outfile.is_open()){
        Outfile.open("dekanat.txt", ofstream::app);
    }
    SetConsoleCP(::GetACP());
    SetConsoleOutputCP(::GetACP());
    char k = ' ';
    Outfilefile();
    cout << "********************************************************" << endl;
    cout << "Lab 11 by Norov Artem, Sosna Oleksandr and Hlynianyi Daniil, CNTU, 2021" << endl;
    cout << "********************************************************" << endl;
    while(true){
        cout << "Список ключiв:" << endl
                << "c - Створення бази даних" << endl
                << "s - Виведення всiєї бази на екран" << endl
                << "a - Додавання нового студента в базу" << endl
                << "f - Пошук студента за iндексом" << endl
                << "d - Вилучення студента з бази" << endl
                << "e - Завершення роботи програми з автоматичним записом у файл." << endl;
        if(write.size() == 0){
            cout << "База даних порожня, виберiть наступну дiю: ";
        }else{
            numbers();
            cout << "Виберiть дiю, з наступних: ";
        }
        cin >> k;
        switch(k){
        case 'c':
            Outfile.open("dekanat.txt", ofstream::app);
            cout << "База даних була створенна" << endl;
            break;
        case 's':
            Screenshow();
            break;
        case 'a':
            Addstudent();
            updater();
            break;
        case 'd':
            Delstudent();
            break;
        case 'f':
            Findstudent();
            break;
        case 'e':
            cout << "Збереження бази даних" << endl;
            updater();
            system("pause");
            return 0;
        default:
            cout << "Невiдомий ключ, спробуйте ще раз:" << endl;
            break;
        }
    }
}
