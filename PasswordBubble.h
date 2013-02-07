#ifndef PASSWORDBUBBLE_H
#define PASSWORDBUBBLE_H

#include <string>

using namespace std;

class PasswordBubble
{
    public:
        PasswordBubble();
        virtual ~PasswordBubble();
        void bubble_sort (string pass[], int N);
    protected:
    private:
};

#endif // PASSWORDBUBBLE_H
