using namespace std;
#include <iostream>

class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };

    Person::Person(int initialAge){
        if(initialAge>-1)
         {
            age=initialAge;
        }
        else 
       {
            age=0;
        cout<<"Age is not valid, setting age to 0."<<"\n";
        }

    }

    void Person::amIOld(){
        if(age<13)
        cout<<"You are young."<<"\n";
        else if(age>=13 && age<18)
        cout<<"You are a teenager."<<"\n";
        else if(age>=18)
        cout<<"You are old."<<"\n";

    }

    void Person::yearPasses(){
        // Increment the age of the person in here
        age++;

    }

int main(){
    int t;
	int age;
    cin >> t;
    for(int i=0; i < t; i++) {
    	cin >> age;
        Person p(age);
        p.amIOld();
        for(int j=0; j < 3; j++) {
        	p.yearPasses(); 
        }
        p.amIOld();
      
		cout << '\n';
    }

    return 0;
}