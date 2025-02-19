#include<bits/stdc++.h>
using namespace std;

int main () {

    //string str; //declaring string
    //cin >> str; // Taking input

    string str1 = "Konichiwa"; // Direct initialization
    cout << str1 << endl;


    //string str2(5,'L'); // For repetated singal char string
    //cout<< str2<<endl;

   //string str3;
    //getline(cin, str3); // Taking input with spaces
   // cout << str3<<endl;

    /*

    string s1 = "Hashu ";
    string s2 = "Apa";

    // Concatination of strings
    s1.append(s2);
    cout << s1 << endl;
    cout << s1+ s2<< endl; // easier way

    //Comparing string
    s1.compare(s2);
    cout << s1 << endl;
      */

      
      string s3 = "nincompoop";
      int size = s3.size();
      cout << size << endl;
      s3.erase(3, 3); // erasinh element from string
      s3.find("poo"); // findind elements in string

      s3.insert(3, "lol"); //inserting element in string
      cout << s3 << endl;

      string s = s3.substr(0, 3); // Getting substring form string
      cout << s << endl;

      string sint = "223";
      int x = stoi(sint); // String to Int 
      cout << x << endl;

      string s4 = "bcdaeghf";
      sort(s4.begin(), s4.end()); // Sorting String
      cout << s4 << endl;






      


   















    return 0;
}


