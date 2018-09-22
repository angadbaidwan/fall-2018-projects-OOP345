// Name: Angadpreet Baidwan
// Student Number: 135421170
// 2018-09-12

#ifndef CSTRING_H
#define CSTRING_H

#include <iostream>
#include <cstring>

namespace w1 {
	const int MAX = 3;
	class CString {
		char CStr[MAX + 1];
	public:
		CString(char* str);
		void display(std::ostream& os);
	};
	std::ostream& operator<<(std::ostream& os, CString& CSobj);
}

#endif
