//============================================================================
// Name        : CSIC_DP_Singleton.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>


using namespace std;

class GlobalClass
{
    int m_value;
    vector<int>list;
    static GlobalClass *s_instance;
    GlobalClass(int v = 0)
    {
        m_value = v;

    }
  public:
    int get_value(int i=0)
    {
        return list[i];
    }
    void set_value(int v)
    {
        m_value = v;
        list.push_back(v);

    }
    static GlobalClass *instance()
    {
        if (!s_instance)
          s_instance = new GlobalClass;
        return s_instance;
    }
};

// Allocating and initializing GlobalClass's
// static data member.  The pointer is being
// allocated - not the object inself.
GlobalClass *GlobalClass::s_instance = 0;


int main()
{

  GlobalClass::instance()->set_value(4);
  GlobalClass::instance()->set_value(2);
  GlobalClass::instance()->set_value(3);
  GlobalClass::instance()->set_value(1);
  GlobalClass::instance()->set_value(5);
  GlobalClass::instance()->set_value(6);


  cout << "main: global_ptr is " << GlobalClass::instance()->get_value() << '\n';

  cout << "main: global_ptr is " << GlobalClass::instance()->get_value(4) << '\n';




  return 0;
}
