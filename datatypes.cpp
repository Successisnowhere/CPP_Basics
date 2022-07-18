#include <iostream>
using namespace std;
int main()
{
    // string data type(always in the double quotes)
    string hello="This is a string";
    cout<<hello<<endl;
    // interger datatype
    int no=12;
    cout<<"This is a number :"<<no<<endl;
    // Character datatype( note : always in the single quotes)
    char c='C';
    cout<<"This is a character "<<c<<endl;
    // array datatype
    int arr[]={1,2,3,4,5,6};
    for(int i=0;i<6;i++){
        cout<<arr[i]<<'\t'; //  '\t' is to give the space of a tab 
    }
    // array can be of int type or char type or string type
    // it is basically the collection of the element of the same data type

    return 0;
    
}