#include <string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = true;
	int cntp = 0, cnty = 0;
	int i = 0;
	while (s[i])
	{
		if (s[i] == 'p' || s[i] == 'P')
			cntp++;
		else if (s[i] == 'y' || s[i] == 'Y')
			cnty++;
		++i;
	}
	if (cntp == 0 && cnty == 0)
		return answer;	
	if (cntp == cnty)
		answer = true;
	else
		answer = false;

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Hello Cpp" << endl;

    return answer;
}