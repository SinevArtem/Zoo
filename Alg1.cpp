
#include <iostream>
#include<string>

using namespace std;




class Animal {
	string name;
	string breed;
	int age;
	

public:
    string location;
	Animal(string n, string b, int a, string l) : name(n), breed(b), age(a), location(l) {};

	virtual void get_voice() {
		cout << "golos" << endl;
	}
	void get_age() {
		cout << age << endl;
	}
	void move_location(Animal &animal){
        string t = animal.location;
        animal.location=this->location;
        this->location=t;
    }
};

class Cat :public Animal {
public:
	Cat(string n, string b, int a, string l) :Animal(n, b, a, l) {}

	void get_voice() override {
		cout << "MAU" << endl;
	}
};

class Dog:public Animal{
	public:
	Dog(string n,string b, int a, string l): Animal(n,b,a,l){};

	void get_voice() override{
		cout<<"GAF"<<endl;
	}
};

class Vorona:public Animal{
	public:
	Vorona(string n,string b, int a, string l): Animal(n,b,a,l){};

	void get_voice() override{
		cout<<"CAR"<<endl;
	}
};




int main()
{
	Cat cat("cat","v",2,"rus");
	Dog dog("dog","d",12,"usa");
    Vorona vorona("vorona","f",1,"UK");
	cat.get_age();
	cat.get_voice();
	dog.get_voice();
    cout<<dog.location<<endl;;
    cout<<cat.location<<endl;;
    dog.move_location(cat);
    cout<<dog.location<<endl;;
    cout<<cat.location<<endl;;

}
