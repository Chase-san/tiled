/*
    Copyright (c) 2017 Kevin Funk <kfunk@.kde.org>

    This library is free software; you can redistribute it and/or modify it
    under the terms of the GNU Library General Public License as published by
    the Free Software Foundation; either version 2 of the License, or (at your
    option) any later version.

    This library is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Library General Public
    License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to the
    Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
    02110-1301, USA.
*/

#pragma once

#include <QTextStream>

#if QT_VERSION < QT_VERSION_CHECK(5,14,0)
namespace Qt {
using ::endl;
}
#endif

#if QT_VERSION >= QT_VERSION_CHECK(6,0,0)
using QStringRef = QStringView;
#endif

#if QT_VERSION < QT_VERSION_CHECK(6,0,0)
constexpr inline QMargins operator|(const QMargins &m1, const QMargins &m2) noexcept
{
    return QMargins(qMax(m1.left(), m2.left()), qMax(m1.top(), m2.top()),
                    qMax(m1.right(), m2.right()), qMax(m1.bottom(), m2.bottom()));
}
#endif
