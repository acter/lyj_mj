#include "common.h"
#include <stdlib.h>
#include <stdio.h>

std::string getPaiString( uint8 p )
{
    uint8 type = p >> 4;
    uint8 value = p & 15;
    char buff[16] = { 0 };
    if (type == 1)
    {
        sprintf( buff, "%d-��", value);
    }
    else if (type == 2)
    {
        sprintf( buff, "%d-��", value );
    }
    else if (type == 3)
    {
        sprintf( buff, "%d-Ͳ", value );
    }
    else if (type == 5)
    {
        //�з���
        if (1 == value)
        {
            sprintf( buff, "����" );
        }
        else if (2 == value)
        {
            sprintf( buff, "����" );
        }
        else if (3 == value)
        {
            sprintf( buff, "�װ�" );
        }
        else
        {
            assert( false );
        }
    }
    
    
    return buff;
}