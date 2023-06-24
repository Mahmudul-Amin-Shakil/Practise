#include <bits\stdc++.h>
using namespace std;
class user
{
public:
    virtual void sendmessage() = 0;
};
class rahim : public user
{
    void sendmessage()
    {
        cout << "i am rahim" << endl;
    }
};
class karim : public user
{
public:
    void sendmessage()
    {
        cout << "i am karim" << endl;
    }
};
int main()
{
    user *u;
    rahim r;
    karim k;
    u = &r;
    u->sendmessage();
    u = &k;
    u->sendmessage();
}