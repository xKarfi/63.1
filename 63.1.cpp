#include <iostream>
#include <fstream>

using namespace std;

class file
{
	public:
	ifstream f1;
	file();



};

file::file()

{
f1.open("ciagi.txt");
}

class check
{

public:

   bool dwucykliczny(string ciag)
   {
 		if (ciag.length()%2==1) 
		 {
		 	return false;
		 }
		for (int i=0; i<ciag.length()/2; i++)
		{
			if (ciag[i]!=ciag[ciag.length()/2+i]) return false;
		}
 		return true;
	} 

};




int main()
{

	check c;
   	file f;
   	string s;


   while(!f.f1.eof())
   {
    f.f1>>s;
    	if(c.dwucykliczny(s))
		{
        	cout<<s<<endl;
    	}
   }
    return 0;
}
