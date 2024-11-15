#include<iostream>
#include<fstream>
#include<map>
#include<cctype>
using namespace std;

int main()
{
    string file_name;
    cout<<"please enter the file's name: ";
    cin>>file_name;

    ifstream file(file_name );
    while(!file.is_open())
    {
        cout<<"Error in opening the file"<<endl;
        cout<<"Please enter a correct file name: "<<endl;
        cin>>file_name;

        file.close();
        file.open(file_name);

    }

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
        cout<<"====Frequency Table====="<<endl;
        for (auto word2 : mp)
        {
            cout<<word2.first<<" : "<<word2.second<<endl;
        }
        file.close();


}