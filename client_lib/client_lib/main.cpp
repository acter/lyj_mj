// client_lib.cpp : �������̨Ӧ�ó������ڵ㡣
//
#include "client_lib.h"

int main( int argc, char* argv[] )
{
    client_lib::Socket socket_;
    bool nRet = socket_.Connect("115.239.211.112", 4576, 3000);
    return 0;
}

