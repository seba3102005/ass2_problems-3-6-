#include<iostream>
#include<fstream>
#include<map>
#include<cctype>
using namespace std;

int main()
{
    string s = "file.txt";
    string file_name;
    cout<<"please enter the file's name: ";
    cin>>file_name;

    ifstream file(file_name );
    if(!file)
    {
        cout<<"error in opening the file"<<endl;
    }
    else
    {
        string word;
        map<string ,int>mp;
        while(file>>word)
        {
            string corrected_word;
            for(char c:word)
            {
                if(isalnum(c))
                {
                    c=tolower(c);
                    corrected_word+=c;
                }
                if(c=='-')
                {
                    corrected_word+=c;
                }
            }
            mp[corrected_word]++;

        }
        for (auto i : mp)
        {
            cout<<i.first<<" : "<<i.second<<endl;
        }
    }


}