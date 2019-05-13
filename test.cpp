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

		// TESTS
		testcase.setname("Range Tests")
		for (int i: range(1,5)){
			strTest += to_string(i);
		}
		testcase.CHECK_EQUAL(strTest, "1234")
		strTest = "";

		for (double i: range(1.1,5.1)){
			strTest += to_string(i);
		}
		testcase.CHECK_EQUAL(strTest, "1.12.13.14.1")
		strTest = "";

		for (char i: range('a','e')){
			strTest += i;
		}
		testcase.CHECK_EQUAL(strTest, "abcd")
		strTest = "";
		;    


		testcase.setname("Chain Tests")
		for (int i: chain(range(1,4), range(5,8))){
			strTest += to_string(i);
		}
		testcase.CHECK_EQUAL(strTest, "123567")
		strTest = "";

		for (char i: chain(range('a','e'), range('f', 'k'))){
			strTest += i;
		}
		testcase.CHECK_EQUAL(strTest, "abcdfghij")
		strTest = "";
		;
		
		for (char i: chain(range('a','e'), string("hello"))){
			strTest += i;
		}
		testcase.CHECK_EQUAL(strTest, "abcdhello")
		strTest = "";
		;


		testcase.setname("Zip Tests")
		for (auto pair: zip(range(1,6), string("hello"))){
			strTest += pair;		// works?
		}
		testcase.CHECK_EQUAL(strTest, "1,h2,e3,l4,l5,o")
		strTest = "";
		;
		
		for (auto pair: zip(range(1,6), range('a', 'f'))){
			strTest += pair;		// works?
		}
		testcase.CHECK_EQUAL(strTest, "1,a2,b3,c4,d5,e")
		strTest = "";
		;

		for (auto pair: zip(range(1,6), range(7,12))){
			strTest += pair;		// works?
		}
		testcase.CHECK_EQUAL(strTest, "1,72,83,94,105,11")
		strTest = "";
		;

		for (auto pair: zip(zip(range(1,4), string("xyz")),zip(string("abc"),range(6,9)))){
			strTest += pair;		// works?	
		}
		testcase.CHECK_EQUAL(strTest, "1,x,a,62,y,b,73,z,c,8")
		strTest = "";
		;
		

		testcase.setname("Product Tests");


		testcase.setname("Powerset Tests");


		testcase.setname("Exceptions");



	 grade = testcase.grade();
	} else {
		testcase.print_signal(signal);
		grade = 0;
	}
	cout << "Your grade is: "  << grade << endl;
	return 0;
}