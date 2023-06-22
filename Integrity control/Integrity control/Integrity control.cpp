#include <bits.h>
#include <iostream>
#include <bitset>
#include <sstream>
#include <algorithm> 
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Enter the Name: ";
    string Word;
    getline(cin, Word);
    int lenth_Word = Word.length();


    char* chars = new char[lenth_Word];
    Word.copy(chars, lenth_Word);

    bitset<8> char1;             bitset<8> char2;
    char1 = bitset<8>(chars[0]); char2 = bitset<8>(chars[lenth_Word - 1]);


    string Char1 = char1.to_string<char, char_traits<char>, allocator<char> >();
    string Char2 = char2.to_string<char, char_traits<char>, allocator<char> >();


    char* Bit1 = new char[8];  char* Bit2 = new char[8];
    Char1.copy(Bit1, 8);       Char2.copy(Bit2, 8);

    bool Flag1 = 0; bool Par_Plus_Bit1; bool Par_Minus_Bit1;


    for (int i = 0; i < 8; i++)
    {
        if (Bit1[i] == 1) { Flag1++; }
    }


    if (Flag1 == 1) { Par_Plus_Bit1 = 1; Par_Minus_Bit1 = 0; }
    else { Par_Plus_Bit1 = 0; Par_Minus_Bit1 = 1; }

    bool Flag2 = 0; bool Par_Plus_Bit2; bool Par_Minus_Bit2;
    for (int i = 0; i < 8; i++)
    {
        if (Bit2[i] == 1) { Flag2++; }
    }
    if (Flag2 == 1) { Par_Plus_Bit2 = 1; Par_Minus_Bit2 = 0; }
    else { Par_Plus_Bit2 = 0; Par_Minus_Bit2 = 1; }


    cout << endl; system("pause"); system("cls");
    cout << "  Буква     " << "Битовая строка     " << "Чётный паритетный бит     " << "нечётный паритетный бит"<<endl<<endl;
    cout << "    " << chars[0] << "          " << Char1 << "                  " << Par_Plus_Bit1 << "                          " <<Par_Minus_Bit1 << endl;
    cout << "    " << chars[lenth_Word - 1] << "          " << Char2 << "                  " << Par_Plus_Bit2 << "                          "<< Par_Minus_Bit2 << endl;

}