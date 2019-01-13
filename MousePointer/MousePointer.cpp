#include "pch.h"
#include "Windows.h"
#include <iostream>

int main() {
	POINT p;
	while (true) {
		GetCursorPos(&p);
		std::cout << '\r' << '(' << p.x << ", " << p.y << ")          ";
		Sleep(1000.0 / 30);
	}
}