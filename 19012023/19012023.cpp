#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

//агрегация, композиция и наследование


//Ассоциация
//Агрегация и композиция
//Композиция - один класс не существует без другого
//Например авто не существует без двигателя

/*
class Engine {
public:
	Engine(int p) : _power(p) {
		std::cout << "Конструктор был вызван";
	}
	Engine(Engine& other) : _power(other.power) {
		std::cout << " Copy constructor was called"
	}

		int getPower() {
			return _power;
		}
	}
private:
	int _power;
	};
};

class Car {
public:
	Car(int enginePower) : _engine(enginePower) {
		Car(Engine& e) : _engine(enginePower);
	}
	
	int getPower() {

		return _engine.getPower();

	}
private:
	std::string_model = "Porshe";
	Engine _engine;


class A {};

public:
	void public_method( ) {}

protected: 
		void protected_method(){}
private:
			private_method(){}
};



//public, private, protected
class B : public A {
	void func() {
		protected_method();
	}
};

*/

//Виртуальное наследование
/*
class Vehicle {
public:
	Vehicle(int speed) : _speed(speed) {
		std::cout << "Vehicle()" << std::endl;
	}
	int getSpeed() {
		return _speed;

	}
private:
	int _speed;
};
enum Transmition {
	Auto,
	Manual
};
class Car : public virtual Vehicle {
public:
	Car(int speed, Transmition transmition) : Vehicle(speed), _transmition(transmition){}

private:
	Transmition _transmition;
};

enum OriginCountry {
	Russia,
	UAE
};
class AirPlane : public virtual Vehicle {
public:
	AirPlane (int speed, OriginCountry country) :
		Vehicle(speed), _originalCountry (country){}
private:
	OriginCountry _originalCountry;
};

enum FlyCarMode {
	Drive,
	Fly
};

class FlyingCar : public Car , public AirPlane {
public:
	FlyingCar(int speed, OriginCountry country,
		Transmition transmition, FlyCarMode initialMode) :
		Car(speed, transmition), AirPlane (speed,country), _mode (initialMode), Vehicle(speed) {}
private:
	FlyCarMode _mode;

};

int main() {
	FlyingCar fc(800, OriginCountry::Russia, Transmition::Auto,
		FlyCarMode::Fly);
	std::cout << fc.getSpeed() << std::endl;


	Vehicle* fc2 =  new FlyingCar(800,  OriginCountry::Russia, Transmition::Auto, FlyCarMode::Fly);

	delete fc2;
}*/

class A {
public:
	void foo() { // статичтический вызов, ранняя привязка
		std::cout << "A::foo()" << std::endl;
	}
};

			
	
	
	
	class B {
public:
	virtual void bar() {
		std::cout << " B::bar()" << std::endl;
	}
	virtual void qux() {
		std::cout << " B::qux()" << std::endl;
	}
};
	class C : public B {
	public:
		void bar() override {
			std::cout << "C::bar()" << std::endl;

		}
	};
int main() {

	B* b = new C;

	b->bar();
}




/*

main() {




	Car c(200);
	Engine e(333);
	Car c2(e);
    std:cout << c.getPower() << std::endl;
    std:cout << c2.getPower() << std::endl;

	std::cout << c.getPower() << std::endl;


	A a;
	a.public_method();
	B b;





}*/


