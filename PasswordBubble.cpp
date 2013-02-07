#include <iostream>
#include <string>
#include <cstring>

#include "PasswordBubble.h"

using namespace std;

PasswordBubble::PasswordBubble()
{
    //ctor
}

PasswordBubble::~PasswordBubble()
{
    //dtor
}

void PasswordBubble::bubble_sort(string pass[], int N)
{
    PasswordBubble pwbubble;
    string key = "0";
    int i=0, j=0;

    for( i = 0; i < N; i++)
		{
			for( j = 0; j < (N-1); j++)
				   if (_strcmpi(pass[j].c_str(), pass[j+1].c_str()) > 0)
                    {
                        key = pass[j];
                        pass[j] = pass[j+1];
                        pass[j+1] = key;
                    }
		}
}
