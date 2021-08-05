class Base
{
public:
    int m_public;
private:
    int m_private;
protected:
    int m_protected;
};

class Protect: protected Base // note: private inheritance
{
    // Private inheritance means:
    // Public inherited members become private (so m_public is treated as private)
    // Protected inherited members become private (so m_protected is treated as private)
    // Private inherited members stay inaccessible (so m_private is inaccessible)
public:
    Protect()
    {
        m_public = 1; // okay: m_public is now protected in Protect
        //m_private = 2; // not okay: derived classes can't access private members in the base class
        m_protected = 3; // okay: m_protected is now private in Protect
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

    Protect pri;
    //pri.m_public = 1; // not okay: m_public is now protected in Protect
    //pri.m_private = 2; // not okay: m_private is inaccessible in Protect
    //pri.m_protected = 3; // not okay: m_protected is now protected in Protect


}

