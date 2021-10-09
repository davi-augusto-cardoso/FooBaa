#include <iostream>
using namespace std;

int main(){
  for (int number=1; number<=100; number++){

    if (number%15 == 0){
      cout<<"FooBaa \n";
    }
    else if(number%5 == 0){
      cout<<"Baa \n";
    }
    else if(number%3 == 0){
      cout<<"Foo \n";
    }
    else{
      cout<<number<<"\n";
    }
  }
}