/***************************************************************************
 *   Copyright (c) 2002 Jürgen Riegel <juergen.riegel@web.de>              *
 *                                                                         *
 *   This file is part of the FreeCAD CAx development system.              *
 *                                                                         *
 *   This library is free software; you can redistribute it and/or         *
 *   modify it under the terms of the GNU Library General Public           *
 *   License as published by the Free Software Foundation; either          *
 *   version 2 of the License, or (at your option) any later version.      *
 *                                                                         *
 *   This library  is distributed in the hope that it will be useful,      *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU Library General Public License for more details.                  *
 *                                                                         *
 *   You should have received a copy of the GNU Library General Public     *
 *   License along with this library; see the file COPYING.LIB. If not,    *
 *   write to the Free Software Foundation, Inc., 59 Temple Place,         *
 *   Suite 330, Boston, MA  02111-1307, USA                                *
 *                                                                         *
 ***************************************************************************/


#ifndef PART_PRECOMPILED_H
#define PART_PRECOMPILED_H

#include <FCConfig.h>


// Exporting of App classes
#ifdef FC_OS_WIN32
# define PartExport __declspec(dllexport)
#else // for Linux
# define PartExport
#endif

//needed to make autogenerated Py interface source code to compile
#define AttacherExport PartExport

// here get the warnings of too long specifiers disabled (needed for VC6)
#ifdef _MSC_VER
#	pragma warning( disable : 4251 )
#	pragma warning( disable : 4275 )
#	pragma warning( disable : 4503 )
#	pragma warning( disable : 4786 )  // specifier longer then 255 chars
#endif


#ifdef _PreComp_

// standard
#include <list>
#include <iostream>
#include <sstream>
#include <stdio.h>
#include <io.h>
#include <fcntl.h>
#include <assert.h>

#include <array>
#include <vector>
#include <list>
#include <set>
#include <map>

#include <fstream>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <stdexcept>

#include <cmath>
#include <ctime>

// QT
#include <QtGlobal>

// Boost
#include <boost/signals2.hpp>
#include <boost/bind/bind.hpp>

#include <boost/tuple/tuple.hpp>
#include <boost/utility.hpp>
#include <boost/graph/adjacency_list.hpp>

#include <boost/program_options.hpp>
//namespace po = boost::program_options;

#include <boost/filesystem/path.hpp>
#include <boost/filesystem/operations.hpp>
#include <boost/filesystem/exception.hpp>

#include <boost/uuid/uuid_io.hpp>

#include "OpenCascadeAll.h"

#elif defined(FC_OS_WIN32)
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#endif //_PreComp_

#ifndef _Standard_Version_HeaderFile
#include <Standard_Version.hxx>
#endif


#endif
