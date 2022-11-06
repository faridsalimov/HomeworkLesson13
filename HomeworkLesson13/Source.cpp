#include <iostream>

using namespace std;

// ===========================================
// Single
// MultiLevel
// Multiple
// Hierarchy
// 
// Her birine uygun real heyatdan numuneler yazin.
// ===========================================

// Single Inheritance:

//class Book {
//public:
//	void Info() {
//		cout << "I am a Book, you can learn something from the Book." << endl;
//	}
//};
//
//class English : public Book {
//public:
//	void Print() {
//		cout << "I am a English Book, you can learn a English language from me." << endl;
//	}
//};
//
//void main() {
//	English eng;
//	eng.Info();
//	eng.Print();
//}

// Multilevel Inheritance:

//class A {
//public:
//	void Print() {
//		cout << "I am letter." << endl;
//	}
//};
//
//class B : public A {};
//
//class C : public B {};
//
//void main() {
//	C ce;
//	ce.Print();
//}


// Multiple Inheritance:

//class Mammal {
//public:
//	Mammal() {
//		cout << "Mammals can give birth directly." << endl;
//	}
//};
//
//class WingedAnimal {
//public:
//	WingedAnimal() {
//		cout << "Winged animal can fly." << endl;
//	}
//};
//
//class Bat : public Mammal, public WingedAnimal {};
//
//void main() {
//	Bat bat;
//}


// Hierarchy Inheritance:

//class Engine {
//public:
//	void Info() {
//		cout << "I am an engine." << endl;
//	}
//};
//
//class Mercedes : public Engine {
//public:
//	void Merc() {
//		cout << "I am a Mercedes branded vehicle, I am very luxurious." << endl;
//	}
//};
//
//class Bmw : public Engine {
//public:
//	void Bw() {
//		cout << "I am a BMW brand vehicle, I am very fast." << endl;
//	}
//};
//
//void main() {
//	cout << "Mercedes Class: " << endl;
//	Mercedes mercedes;
//	mercedes.Info();
//	mercedes.Merc();
//
//	cout << "\nBMW Class: " << endl;
//	Bmw bmw;
//	bmw.Info();
//	bmw.Bw();
//}