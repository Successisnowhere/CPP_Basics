#include<iostream>
using namespace std;
void sayHi(){
    cout<<"Hi User"<<endl;
}

double cube(double a);
int main(){
    // if you define the function before main() function
  sayHi();
//   if you defined the functions after the main function then you have to define before main() function
  cout<<cube(2);
return 0;
}

double cube(double a){
    return a*a*a;
}

// the function has some following parameters
// return_type function_name(param_data_type param_name)
// then we have to call the function with the function name(realparam)