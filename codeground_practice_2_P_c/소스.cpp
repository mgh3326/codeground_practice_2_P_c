#define _CRT_SECURE_NO_WARNINGS

/*
You should use the statndard input/output

in order to receive a score properly.

Do not use file input and output

Please be very careful.
*/

#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
using namespace std;

int Answer;

int main(int argc, char** argv)
{
	int T, test_case;
	unsigned int num;
	unsigned int max;
	/*
	The freopen function below opens input.txt file in read only mode, and afterward,
	the program will read from input.txt file instead of standard(keyboard) input.
	To test your program, you may save input data in input.txt file,
	and use freopen function to read from the file when using cin function.
	You may remove the comment symbols(//) in the below statement and use it.
	Use #include<cstdio> or #include <stdio.h> to use the function in your program.
	But before submission, you must remove the freopen function or rewrite comment symbols(//).
	*/

	//freopen("input.txt", "r", stdin);
	//setbuf(stdout, NULL);
	cin >> T;
	for (test_case = 0; test_case < T; test_case++)
	{
		scanf("%d", &num);
		//scanf("%d", &max);
		vector<unsigned int> v(num);
		//v[0] = max;
		for (unsigned int i = 0; i < num; i++)
		{
			scanf("%d", &v[i]);
		}
		sort(v.begin(), v.end());
		Answer = 0;
		max = 0;
		for (unsigned int i = 0; i < num; i++)
		{
			if (max <= (num + v[i] - i))
				max = v[i] + num - i;
		}
		for (unsigned int i = 0; i < num; i++)
			if (v[i] + num >= max)
				Answer++;
		/////////////////////////////////////////////////////////////////////////////////////////////
		/*
		Implement your algorithm here.
		The answer to the case will be stored in variable Answer.
		*/
		/////////////////////////////////////////////////////////////////////////////////////////////

		// Print the answer to standard output(screen).
		cout << "Case #" << test_case + 1 << endl;
		cout << Answer << endl;
	}

	return 0;//Your program should return 0 on normal termination.
}



//
//프로그래밍 경진대회
//https://cdn.codeground.org/resources/attachData/d05f0db285/5a738722-db18-4aad-b4c4-824cec5c7700.png
//
//https://cdn.codeground.org/resources/attachData/d05f0db285/29b0a30d-4c58-46cd-a442-f0b156ff1cb6.png
//
//1
//3
//5
//7
//6