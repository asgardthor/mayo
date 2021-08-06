/****************************************************************************
** Copyright (c) 2021, Fougue Ltd. <http://www.fougue.pro>
** All rights reserved.
** See license at https://github.com/fougue/mayo/blob/master/LICENSE.txt
****************************************************************************/

#include "io_writer.h"
#include "messenger.h"

namespace Mayo {
namespace IO {

Writer::Writer()
    : m_messenger(NullMessenger::instance())
{
}

void Writer::setMessenger(Messenger* messenger)
{
    if (messenger)
        m_messenger = messenger;
    else
        m_messenger = NullMessenger::instance();
}

} // namespace IO
} // namespace Mayo
