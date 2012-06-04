/*****************************************************************************
 * Copyright (c) 2012, WebItUp
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

#include "root.h"

#include <vlc/vlc.h>

/*! \cond */

namespace RoxeePlayer{
const QString Root::getName(){
    return PROJECT_NAME;
}

const QString Root::getVersion(){
    return VERSION_FULL;
}

const QString Root::getRevision(){
    return VERSION_GIT;
}

const QString Root::getChangeset(){
    return VERSION_CHANGE;
}

const QString Root::getLibVersion(){
//            return LIBVLC_VERSION_MAJOR + "." + LIBVLC_VERSION_MINOR + '.' + LIBVLC_VERSION_EXTRA;
    return QString(libvlc_get_version());
}

const QString Root::getLibRevision(){
//            return LIBVLC_VERSION_EXTRA;
    return QString(libvlc_get_changeset());
}

}

/*! \endcond */