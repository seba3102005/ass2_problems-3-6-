#include<iostream>
#include<fstream>
#include<map>
#include<cctype>
using namespace std;

int main()
{
    string s = "file.txt";
    ifstream file("file.txt" );
    string word;
    map<string ,int>mp;
    while(file>>word)
    {
        string corrected_word;
        for(char c:word)
        {
            if(isalpha(c))
            {
                c=tolower(c);
                corrected_word+=c;
            }
            if(c=='-')
            {
                corrected_word+=c;
            }
        }
        cout<<corrected_word<<' ';
    }

}