#ifndef ISUPERVISORSTATECONTEXT_H
#define ISUPERVISORSTATECONTEXT_H




class ISupervisorStateContext
{
public:
    static ISupervisorStateContext& getInstance();

    virtual bool startup()=0;
};




#endif // ISUPERVISORSTATECONTEXT_H
