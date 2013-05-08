/*****************************************************************************
 * Copyright (c) 2012, WebItUp <contact@webitup.fr>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston MA 02110-1301, USA.
 *****************************************************************************/

#ifndef ROXEEPLAYER_CORE_H
#define ROXEEPLAYER_CORE_H

#include "libroxeeplayer_global.h"
#include "libroxeeplayer/vlc2.h"

#include <QtCore/qobject.h>
#include <QtCore/qstringlist.h>

namespace RoxeePlayer{

/*! \brief A core object with a couple of random infos / helpers. Don't instanciate directly. Use SimplePlayer instead. */
class LIBROXEEPLAYERSHARED_EXPORT Core : public QObject
{
    Q_OBJECT
public:
    /*! \brief Should be created by passing a reference to the shadowed libvlc object. */
    explicit Core(RoxeeVLC * rvlc, QObject *parent = 0);

    /*! \brief Allows to control the UA string that will be set for http streams retrieval. */
    Q_INVOKABLE void setUserAgent(const QString &appName, const QString &appVersion);

    /*! \brief Gets the compiler used to build the underlying library */
    Q_PROPERTY(const QString compiler READ getCompiler)

    Q_PROPERTY(const QStringList audioFilterList READ getAudioFilterList)
    Q_PROPERTY(const QStringList videoFilterList READ getVideoFilterList)

    /*! \cond */
    QString getCompiler();
    QStringList getAudioFilterList();
    QStringList getVideoFilterList();
    /*! \endcond */

signals:

public slots:

private:
    RoxeeVLC * vlc;

};
}

#endif // ROXEEPLAYER_CORE_H
