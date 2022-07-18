#include<iostream>
using namespace std;
int main(){
//  now we can see some of the string function
string clgName="Siddaganga institute of technology";
// basically every charachter is having its own index in the string (string is the combined array of the characters)
cout<<clgName[0]<<endl;// S
// to change any character in the 
clgName[0]='T';
cout<<clgName<<endl;
//  to find any charachter in the string 
cout<<clgName.find("i")<<endl;// it will by default give the starting index of the substring from the index 0( give 1)
// we can specify from where we want the distance
cout<<clgName.find("i",4)<<endl;// 11
// we can also find substring
cout<<clgName.find("of")<<endl;//21


// ===========substring
string substr;
substr=clgName.substr(11,5);//  it will take two param (no of starting index,size of the substring);
cout<<substr<<endl;//insti
return 0;
}