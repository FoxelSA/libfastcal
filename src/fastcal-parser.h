/*
 * libfastcal - Fast calibration data access
 *
 * Copyright (c) 2013-2014 FOXEL SA - http://foxel.ch
 * Please read <http://foxel.ch/license> for more information.
 *
 *
 * Author(s):
 *
 *      Nils Hamel <n.hamel@foxel.ch>
 *
 *
 * This file is part of the FOXEL project <http://foxel.ch>.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *
 * Additional Terms:
 *
 *      You are required to preserve legal notices and author attributions in
 *      that material or in the Appropriate Legal Notices displayed by works
 *      containing it.
 *
 *      You are required to attribute the work as explained in the "Usage and
 *      Attribution" section of <http://foxel.ch/license>.
 */

    /*! \file   fastcal-parser.h
     *  \author Nils Hamel <n.hamel@foxel.ch>
     *
     *  Key-value file parser
     */

/*
    Header - Include guard
 */

    # ifndef __LF_IMPORT__
    # define __LF_IMPORT__

/*
    Header - C/C++ compatibility
 */

    # ifdef __cplusplus
    extern "C" {
    # endif

/*
    Header - Includes
 */

    # include "fastcal.h"

/*
    Header - Preprocessor definitions
 */

    /* Define parsing flag variables */
    # define LF_PARSE_KEY   lf_Enum_s( 0 )
    # define LF_PARSE_VALUE lf_Enum_s( 1 )
    # define LF_PARSE_SKIP  lf_Enum_s( 2 )

    /* Define UTF-8 constants */
    # define LF_UTF8_NUL    lf_Char_s( 0x00 )
    # define LF_UTF8_SP     lf_Char_s( 0x20 )
    # define LF_UTF8_EQUAL  lf_Char_s( 0x3D )

    /* Define key search flags */
    # define LF_INVALID     lf_Size_s( -1 )
    

/*
    Header - Preprocessor macros
 */

/*
    Header - Typedefs
 */

/*
    Header - Structures
 */

/*
    Header - Function prototypes
 */

    /*! ...*/

    lf_Enum_t lf_parse ( lf_Char_t * lfMacAddress, lf_Char_t * lfMountPoint, lf_Descriptor_t * lfDesc );

    /*! ...*/

    lf_Void_t lf_release ( lf_Descriptor_t * lfDesc );

    /*! ...*/

    lf_Size_t lf_key( lf_Char_t const * const lfKey, lf_Descriptor_t const * const lfDesc );

/*
    Header - C/C++ compatibility
 */

    # ifdef __cplusplus
    }
    # endif

/*
    Header - Include guard
 */

    # endif

