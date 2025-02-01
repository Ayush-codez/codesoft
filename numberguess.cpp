#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void show();
int generatednumber(int a,int b){
    srand(static_cast<unsigned int>(time(nullptr)));
    return rand()% (b-a + 1) + b;
}

int main(){
    const int MIN_NUMBER=1;
    const int MAX_NUMBER=100;
    int userguess=0;
    int numberofguesses=0;
    int randomnumber=generatednumber(MIN_NUMBER,MAX_NUMBER);
    show();
    cout<<"I have selected a number  between the "<<MIN_NUMBER <<" and "<<MAX_NUMBER<<endl;
    
    while(userguess!=randomnumber){
        cin>>userguess;
        numberofguesses++;
        if(userguess<randomnumber){
            cout<<"your guess is too low!"<<endl;;
        }
        else if(userguess>randomnumber){
                cout<<"your guess is too high !"<<endl;
            }

        else{
            cout<<"congratulations ! you guessed the correct number "<<userguess<<endl;

            cout<<"your total number of guesses is : "<<numberofguesses;
            
        }
        
            
        }
    }
    void show(){
    cout<<"-------------------------------------"<<endl;
    cout<<" welcome to the number guess game :"<<endl;
    cout<<"-------------------------------------"<<endl;
    
    }



