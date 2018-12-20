#ifndef SUPERVISORMGR_H
#define SUPERVISORMGR_H

#include <iostream>
#include "isupervisorstatecontext.h"
#include "singleton.h"

using namespace std;

class SupervisorMgr : public ISupervisorStateContext
{
    friend class singleton<SupervisorMgr>; // 模板类，
/* SupervisorMgr 现在声明为是这个  class singleton<SupervisorMgr> 的友元
声明为谁的友元，就可以通过谁的对象来访问谁的私有数据成员。
声明为谁的成员：通常是由左值决定的。
声明为谁的友元：通常是由右值决定的。

友元类 ：
      友元类的所有成员函数都是另一个类的友元函数，都可以访问另一个类中的隐藏信息（包括私有成员和保护成员）。
      当希望一个类可以存取另一个类的私有成员时，可以将该类声明为另一类的友元类。定义友元类的语句格式如下：
      friend class 类名;
      其中：friend和class是关键字，类名必须是程序中的一个已定义过的类。

      例如，以下语句说明类B是类A的友元类：
      class A
      {
             …
      public:
             friend class B;
             …
      };
      经过以上说明后，类B的所有成员函数都是类A的友元函数，能存取类A的私有成员和保护成员。

      使用友元类时注意：
            (1) 友元关系不能被继承。
            (2) 友元关系是单向的，不具有交换性。若类B是类A的友元，类A不一定是类B的友元，要看在类中是否有相应的声明。
            (3) 友元关系不具有传递性。若类B是类A的友元，类C是B的友元，类C不一定是类A的友元，同样要看类中是否有相应的申明
*/
public:
    //implement ISupervisorStateContext
    virtual bool startup();

private:
    SupervisorMgr();
    ~SupervisorMgr();

    void init();

};

#endif // SUPERVISORMGR_H
