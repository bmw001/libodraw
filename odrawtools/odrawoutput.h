/*
 * Common output functions for the odrawtools
 *
 * Copyright (C) 2010-2016, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _ODRAWOUTPUT_H )
#define _ODRAWOUTPUT_H

#include <common.h>
#include <file_stream.h>
#include <types.h>


#if defined( __cplusplus )
extern "C" {
#endif

void odrawoutput_copyright_fprint(
      FILE *stream );

void odrawoutput_version_fprint(
      FILE *stream,
      const system_character_t *program );

void odrawoutput_version_detailed_fprint(
      FILE *stream,
      const system_character_t *program );

#if defined( __cplusplus )
}
#endif

#endif /* !defined( _ODRAWOUTPUT_H ) */

