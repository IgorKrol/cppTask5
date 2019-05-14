#include <iostream>
#include <string>
using namespace std;

#include "badkan.hpp"
#include "range.hpp"
#include "chain.hpp"
#include "product.hpp"
#include "zip.hpp"
#include "powerset.hpp"


using namespace itertools;

int main(){
	badkan::TestCase testcase;
	int grade=0;
	int signal = setjmp(badkan::longjmp_buffer);
	if (signal == 0) {

		string strTest = "";	

		// MY TESTS
		// Checking Ranges
		testcase.setname("Range Tests");
		for (int i: range(1,5)){
			strTest += to_string(i);
		}
		testcase.CHECK_OUTPUT(strTest, "1234");
		strTest = "";

		for (double i: range(1.1,5.1)){
			strTest += to_string(i);
		}
		testcase.CHECK_OUTPUT(strTest, "1.12.13.14.1");
		strTest = "";

		for (char i: range('a','e')){
			strTest += i;
		}
		testcase.CHECK_OUTPUT(strTest, "abcd");
		strTest = "";
		;    

		// Checking Chains
		testcase.setname("Chain Tests");
		for (int i: chain(range(1,4), range(5,8))){
			strTest += to_string(i);
		}
		testcase.CHECK_OUTPUT(strTest, "123567");
		strTest = "";

		for (char i: chain(range('a','e'), range('f', 'k'))){
			strTest += i;
		}
		testcase.CHECK_OUTPUT(strTest, "abcdfghij");
		strTest = "";
		;
		
		for (char i: chain(range('a','e'), string("hello"))){
			strTest += i;
		}
		testcase.CHECK_OUTPUT(strTest, "abcdhello");
		strTest = "";
		;

		// Checking Zips
		testcase.setname("Zip Tests");
		for (auto pair: zip(range(1,6), string("hello"))){
			strTest += pair;		// works? maybe to_string(pair)?
		}
		testcase.CHECK_OUTPUT(strTest, "1,h2,e3,l4,l5,o");
		strTest = "";
		;
		
		for (auto pair: zip(range(1,6), range('a', 'f'))){
			strTest += pair;		// works? maybe to_string(pair)?
		}
		testcase.CHECK_OUTPUT(strTest, "1,a2,b3,c4,d5,e");
		strTest = "";
		;

		for (auto pair: zip(range(1,6), range(7,12))){
			strTest += pair;		// works? maybe to_string(pair)?
		}
		testcase.CHECK_OUTPUT(strTest, "1,72,83,94,105,11");
		strTest = "";
		;

		for (auto pair: zip(zip(range(1,4), string("xyz")),zip(string("abc"),range(6,9)))){
			strTest += pair;		// works? maybe to_string(pair)?	
		}
		testcase.CHECK_OUTPUT(strTest, "1,x,a,62,y,b,73,z,c,8");
		strTest = "";
		;
		
		// Checking Products
		testcase.setname("Product Tests");
		for(auto pair: product(range(1,4), string("hello"))){
			strTest += pair;
		}
		testcase.CHECK_OUTPUT(strTest, "1,h1,e1,l1,l1,o2,h2,e2,l2,l2,o3,h3,e3,l3,l3,o");
		strTest = "";

		for(auto pair: product(range('a', 'd'), range(1,4))){
			strTest += pair;
		}
		testcase.CHECK_OUTPUT(strTest, "a,1a,2a,3b,1b,2b,3c,1c,2c,3");
		strTest = "";

		for(auto pair: product(chain(string("ab"), range('c', 'e')), chain(string("12"), range('3', '5')))){
			strTest += pair;
		}
		testcase.CHECK_OUTPUT(strTest, "a,1a,2a,3a,4b,1b,2b,3b,4c,1c,2c,3c,4d,1d,2d,3d,4");
		strTest = "";

		for(auto pair: product(zip(string("ab"), range('c', 'e')), zip(string("12"), range('3', '5')))){
			strTest += pair;				// zip1: a,c b,d;; zip2:1,3 2,4;;
		}									// product of zips: a,c1,3 a,c2,4 b,d1,3 b,d2,4
		testcase.CHECK_OUTPUT(strTest, "a,c1,3a,c2,4b,d1,3b,d2,4");
		strTest = "";
		;

		// Checking Powersets
		testcase.setname("Powerset Tests");
		for (auto subset: powerset(range(1,4))){
			strTest += subset;
		}
		testcase.CHECK_OUTPUT(strTest, "{}{1}{2}{1,2}{3}{1,3}{2,3}{1,2,3}");
		strTest = "";

		for (auto subset: powerset(range('a','d'))){
			strTest += subset;
		}
		testcase.CHECK_OUTPUT(strTest, "{}{a}{b}{a,b}{c}{a,c}{b,c}{a,b,c}");
		strTest = "";

		for (auto subset: powerset(zip(range('a','c'), range('c', 'e')))){		// zip: a,c, b,d
			strTest += subset;
		}
		testcase.CHECK_OUTPUT(strTest, "{}{a,c}{b,d}{a,c,b,d}");
		strTest = "";


		;


		// Checking for Exceptions
		testcase.setname("Exceptions")

		testcase.CHECK_THROWS(range(2,1))				// a supposed to be bigger than b
		testcase.CHECK_THROWS(range(2,2))				// a supposed to be bigger than b

		testcase.CHECK_THROWS(zip(range(1,3), range(2,10))		// different lengths
		;



	 grade = testcase.grade();
	} else {
		testcase.print_signal(signal);
		grade = 0;
	}
	cout << "Your grade is: "  << grade << endl;
	return 0;
}