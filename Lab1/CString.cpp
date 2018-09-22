// Name: Angadpreet Baidwan
// Student Number: 135421170
// 2018-09-12

#define _CRT_SECURE_NO_WARNINGS
#include "CString.h"

int _max = w1::MAX;

namespace w1 {
	// Single Argument Constructor
	CString::CString(char* str) {
		if (str != nullptr) {
			strncpy(CStr, str, _max);
			CStr[_max] = '\0';
		}
		else {
			CStr[0] = '\0';
		}
	}
	// Query - Displays string stored in CString object
	void CString::display(std::ostream& os) {
		os << CStr;
	}
	// Inserts stored string into ostream operand and increments counter
	std::ostream& operator<<(std::ostream& os, CString& CSobj) {
		static int insertCount = 0;
		os << insertCount++ << ": ";
		CSobj.display(os);
		return os;
	}
}