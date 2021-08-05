#include <iostream>

using namespace std;

class Base
{
public:
    int m_public;
    Base ()
    {
      cout << "sup" << endl;
    }
private:
    int m_private;
protected:
    int m_protected;
};

class Pri: private Base // note: private inheritance
{
    // Private inheritance means:
    // Public inherited members become private (so m_public is treated as private)
    // Protected inherited members become private (so m_protected is treated as private)
    // Private inherited members stay inaccessible (so m_private is inaccessible)
public:
    Pri()
    {
        m_public = 1; // okay: m_public is now private in Pri
       // m_private = 2; // not okay: derived classes can't access private members in the base class
        m_protected = 3; // okay: m_protected is now private in Pri
    }
};

int main()
{
    // Outside access uses the access specifiers of the class being accessed.
    // In this case, the access specifiers of base.
    Base base;
    base.m_public = 1; // okay: m_public is public in Base
    //base.m_private = 2; // not okay: m_private is private in Base
    //base.m_protected = 3; // not okay: m_protected is protected in Base

    Pri pri;
 //   pri.m_public = 1; // not okay: m_public is now private in Pri
    //pri.m_private = 2; // not okay: m_private is inaccessible in Pri
    //pri.m_protected = 3; // not okay: m_protected is now private in Pri

}