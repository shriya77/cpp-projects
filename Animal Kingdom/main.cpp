/* PSEUDOCODE
1. Create and test Rhino objects:
    - Create r1 using parameterized constructor and call its methods.
    - Create r2 using default constructor, then call its methods.
    - Create r3 using the copy constructor and print it.

2. Create and test Lion object:
    - Instantiate Lion using default constructor and call its methods.

3. Create and test Wolf object:
    - Instantiate w using parameterized constructor and call its methods.
    - Set new food and copy it into w2.

4. Demonstrate static binding:
    - Declare an array of Animal objects.
    - Fill with different derived types.
    - Loop through and call methods on each — observe base-class behavior due to slicing.

5. Demonstrate dynamic binding:
    - Create an array of Animal pointers.
    - Use new to assign Dog, Wolf, Rhino, Tiger, Lion.
    - Loop through and call methods — observe correct virtual behavior.

6. Test Vet class functionality:
    - Instantiate a Vet.
    - Create a Dog, Rhino, and Feline.
    - Use Vet::giveShot to call makeNoise on each animal.
*/

#include <iostream>
#include "Rhinos.h"
#include "Lion.h"
#include "Tiger.h"
#include "Wolf.h"
#include "Dog.h"
#include "Vet.h"
using namespace std;

int main()
{
// Instantiate a Rhino object with parameters
Rhinos r1 ("Rhino", "Grass", 2, "Jungle");
        cout<<r1;
        cout << endl << endl;
		r1.makeNoise();
		r1.eat();
		r1.roam();
		r1.sleep();
		cout << "The food I eat is " << r1.getFood() <<endl <<endl;

		// Instantiate a Rhino object with no parameters
		cout << "\nRhinos with no paramters \n";
		Rhinos r2 ;
		cout<<r2;
		r2.makeNoise();
		r2.eat();
		r2.roam();
		r2.sleep();
		cout << "The food I eat is " << r2.getFood() <<endl <<endl;

		// Instantiate a Rhino object  by copying another Rhino object
		cout << "\nNew Rhino: \n";
		Rhinos r3(r2);
		cout<<r3;
        cout << endl;

// Instantiate a Lion object with no parameters
		cout << "\nLION \n";
		Lion l ;
		cout<<l;
		cout << endl << endl;
		l.makeNoise();
		l.eat();
		l.roam();
		l.sleep();
        cout << endl << endl;

// Instantiate a Wolf object with parameters
		cout << "\nWOLF \n";
		Wolf w ("Wolfe", "Meat", 10, "Fields");
		cout<<w;
		cout << endl << endl;
		w.makeNoise();
		w.eat();
		w.roam();
		w.sleep();
		cout << endl << endl;

		w.setFood("Rabbit");
        cout << "\nCoying another WOLF object\n";
		Wolf w2 = w;
        cout<<w2;

    //Static Binding
    // For this  make 
	 //virtual void makeNoise() = 0; to below in Animal class to check the output:
    //virtual void makeNoise(){}

		Animal animal[5];
		cout << "\nDOG:" << endl;
		animal[0] = Dog("Tommy", "YogurtRice", 12, "Home");
		 cout << " \nWOLF:"<< endl;
		animal[1] =  Wolf();
		 cout << "\nRHINOS:"<< endl;
		animal[2] = Rhinos();
		 cout << "\nTIGER:"<< endl;
		animal[3] = Tiger();
		 cout << "\nLION:"<< endl;
		animal[4] =  Lion();
        cout << endl;

		cout << ("\nEating, roaming and noise Habbits:\n");
		cout << "----------------------------------\n";
		for(int i = 0; i < 5; i++)
		{
		   cout<<animal[i];
			animal[i].makeNoise();
			animal[i].eat();
			animal[i].roam();
			animal[i].sleep();
			 cout << endl;
		}
		
    //Dynamic Binding
		Animal *animal1[5];
		cout << "Dog: \n";
		animal1[0] = new Dog("Tommy", "YogurtRice", 12, "Home");
		 cout << endl;
		 cout << "Wolf: \n";
		animal1[1] =  new Wolf();
		 cout << endl;
		 cout << "Rhinos: \n";
		animal1[2] = new Rhinos();
		 cout << endl;
		 cout << "Tiger: \n";
		animal1[3] = new Tiger("Tigger", "you", 15, "Sambal Forest");
		 cout << endl;
		 cout << "Lion: \n";
		animal1[4] = new Lion();
        cout << endl;

		cout << ("\nEating, roaming and noise Habbits:\n");
		cout << "----------------------------------\n";
		for(int i = 0; i < 5; i++)
		{
		    animal1[i]->print();
		    cout << endl;
			animal1[i]->makeNoise();
			animal1[i]->eat();
			animal1[i]->roam();
			animal1[i]->sleep();
            cout << endl << endl;
		}

		//Testing Vet class
            Vet v ;
            cout << "\nDOG:" << endl;
			Dog d ;
			cout << "\nVet:" << endl;
			 v.giveShot(d);
			 cout << "\nRhinos:" << endl;
			Rhinos r ;
			cout << "\nVet:" << endl;
			v.giveShot(r);
			 cout << "\nFeline:" << endl;
			Feline f;
			cout << "\nVet:" << endl;
			v.giveShot(f);
			cout << endl;

    return 0;
}