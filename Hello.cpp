#include <iostream>
uisng namespace std;
int main(){
     int part_one =1;
        int part_two=2;
             string operation;
                double result =3;
                    cout<<"Enter the first part "<<endl;
                     cin>>part_one;
                        cout <<"Enter the second part"<<endl;
                          cin >> part_two ;
                          cout << "What is your operator? (+, - , *, /) "<<endl;
                            cin >>operation;
                         if (operation == "+"){
                                 result = part_one + part_two
                                           }else if(operation == "-"){
                                                    result =  part_one-part_two;}
                                                    else if (operation == "*"){ 
                                                result =   part_one * part_two;}
                                                            else if ( operation== "/"){result =    static_cast<double>(part_one)/static_cast<double>(part_two);}
                                 else {
                                cout<<"you have done a wronge operation";
                                 }
                            }
                           





 