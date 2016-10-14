#include "buffer.h"
namespace client_lib
{
        Buffer::Buffer( size_t initialSize )
            : buffer_( kCheapPrepend + initialSize )
            , readerIndex_( kCheapPrepend )
            , writerIndex_( kCheapPrepend )
        {

        }

        Buffer::~Buffer()
        {

        }

        int Buffer::readFd( int fd )
        {
            size_t writable = writableBytes();
            if (writable == 0)
            {
                if (readerIndex_ == kCheapPrepend && writerIndex_ == buffer_.size())
                {
                    //����������,��û�ж�ȡ����,���ʱ�򲻽�������
                    assert( false );
                    return 1;
                }

                move(); //�ƶ�λ��
                writable = writableBytes();
                assert( writable > 0 );
            }
            int n = ::recv( fd, beginWrite(), writable, 0 );
            if (n >= 0)
            {
                hasWritten( n );
            }

            return n;
        }
}