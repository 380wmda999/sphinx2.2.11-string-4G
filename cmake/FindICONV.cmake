#.rst:
# FindIconv
# --------------
#
# Find libiconv library and headers
#
# The module defines the following variables:
#
# ::
#
#   ICONV_FOUND        - true if libarchive was found
#   ICONV_INCLUDE_DIRS - include search path
#   ICONV_LIBRARIES    - libraries to link

#=============================================================================
# Copyright 2015 Sphinx Technologies, Inc.
#
# Distributed under the OSI-approved BSD License (the "License");
# see accompanying file Copyright.txt for details.
#
# This software is distributed WITHOUT ANY WARRANTY; without even the
# implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
# See the License for more information.
#=============================================================================
# (To distribute this file outside of CMake, substitute the full
#  License text for the above reference.)

find_path ( ICONV_INCLUDE_DIRS iconv.h )

include(helpers)
ac_search_libs ("iconv;libiconv" "iconv" HAVE_LIBICONV LIBICONV_LIBRARY)

if (HAVE_LIBICONV)
	set (_CHECK_ICONV "#include <iconv.h>
#include <stdio.h>

int main()
{
const char * inbuf;
iconv_t cd;
iconv ( cd, &inbuf, NULL, NULL, NULL );
return 0;
}")

	include(CheckCXXSourceCompiles)
	set(CMAKE_REQUIRED_INCLUDES ${ICONV_INCLUDE_DIRS})
	set(CMAKE_REQUIRED_LIBRARIES ${LIBICONV_LIBRARY})
	CHECK_CXX_SOURCE_COMPILES("${_CHECK_ICONV}" HAVE_CONST_ICONV)
	set(CMAKE_REQUIRED_INCLUDES)
	set(CMAKE_REQUIRED_LIBRARIES)
	if (HAVE_CONST_ICONV)
		set (ICONV_INBUF_CONST 1)
	endif (HAVE_CONST_ICONV)
endif (HAVE_LIBICONV)

mark_as_advanced(ICONV_INCLUDE_DIRS LIBICONV_LIBRARY HAVE_CONST_ICONV)

# Handle the QUIETLY and REQUIRED arguments and set LIBICONV_FOUND
# to TRUE if all listed variables are TRUE.
# (Use ${CMAKE_ROOT}/Modules instead of ${CMAKE_CURRENT_LIST_DIR} because CMake
#  itself includes this FindLibArchive when built with an older CMake that does
#  not provide it.  The older CMake also does not have CMAKE_CURRENT_LIST_DIR.)
include(${CMAKE_ROOT}/Modules/FindPackageHandleStandardArgs.cmake)
find_package_handle_standard_args(Iconv
								REQUIRED_VARS HAVE_LIBICONV ICONV_INCLUDE_DIRS
	)

if(ICONV_FOUND)
	set(ICONV_LIBRARIES ${LIBICONV_LIBRARY})
endif()