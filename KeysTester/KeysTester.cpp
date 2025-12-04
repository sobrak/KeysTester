#include "KeysTester.h"

std::vector<char> keys = { 'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o',
'p', 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'z', 'x', 'c', 'v', 'b', 'n', 'm' };

void Interface(char target) {
	system("cls");
	for (char i : keys) {
		if (i == target) { std::cout << i << " pressed" << std::endl; } else {std::cout << i << std::endl; }
	}
}

int main()
{
	//std::cout << "Print something..." << std::endl;
	while (true) {
		if (GetAsyncKeyState('Q')) { Interface('q'); }
		if (GetAsyncKeyState('W')) { Interface('w'); }
		if (GetAsyncKeyState('E')) { Interface('e'); }
		if (GetAsyncKeyState('R')) { Interface('r'); }
		if (GetAsyncKeyState('T')) { Interface('t'); }
		if (GetAsyncKeyState('Y')) { Interface('y'); }
		if (GetAsyncKeyState('U')) { Interface('u'); }
		if (GetAsyncKeyState('I')) { Interface('i'); }
		if (GetAsyncKeyState('O')) { Interface('o'); }
		if (GetAsyncKeyState('P')) { Interface('p'); }
		if (GetAsyncKeyState('A')) { Interface('a'); }
		if (GetAsyncKeyState('S')) { Interface('s'); }
		if (GetAsyncKeyState('D')) { Interface('d'); }
		if (GetAsyncKeyState('F')) { Interface('f'); }
		if (GetAsyncKeyState('G')) { Interface('g'); }
		if (GetAsyncKeyState('H')) { Interface('h'); }
		if (GetAsyncKeyState('J')) { Interface('j'); }
		if (GetAsyncKeyState('K')) { Interface('k'); }
		if (GetAsyncKeyState('L')) { Interface('l'); }
		if (GetAsyncKeyState('Z')) { Interface('z'); }
		if (GetAsyncKeyState('X')) { Interface('x'); }
		if (GetAsyncKeyState('C')) { Interface('c'); }
		if (GetAsyncKeyState('V')) { Interface('v'); }
		if (GetAsyncKeyState('B')) { Interface('b'); }
		if (GetAsyncKeyState('N')) { Interface('n'); }
		if (GetAsyncKeyState('M')) { Interface('m'); }
		Sleep(100);
	}
	return 0;
}
