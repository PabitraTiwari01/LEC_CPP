#include<iostream>
using namespace std;
 
class sathiharu {
    public: 
        string name;
        string addresss;
        int age;
 
    public:
        void ghumeprogram() {
            cout<<"Oi Espali ghumna jaam bujhis "<<name<<" umm "
            <<age<<"\tko umer ma hike garna sakinchha masta. ka jane hola ta "
            <<addresss<<" jada thik hola?";
        }
};
 
int main() {
    sathiharu firstfriend, secondfriend;
    firstfriend.name = "Shruti";
    firstfriend.age = 22;
    firstfriend.addresss = "Pilotbaba";
    firstfriend.ghumeprogram();
 
    secondfriend.name = "Niruja";
    secondfriend.age = 20;
    secondfriend.addresss = "pilotbaba";
    secondfriend.ghumeprogram();
 
}