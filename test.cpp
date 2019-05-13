#include <iostream>
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

		// TESTS
		testcase.setname("Range");


		testcase.setname("Chain");


		testcase.setname("Product");


		testcase.setname("Zip");


		testcase.setname("Powerset");


		testcase.setname("Exceptions");



	 grade = testcase.grade();
	} else {
		testcase.print_signal(signal);
		grade = 0;
	}
	cout << "Your grade is: "  << grade << endl;
	return 0;
}