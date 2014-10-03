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

    /*! \file   fastcal.h
     *  \author Nils Hamel <n.hamel@foxel.ch>
     *
     *  Library common header file
     */

    /*! \mainpage libfastcal
     *
     *  \section libfastcal
     *  \section _ Fast calibration data access
     *
     *  The libfastcal is designed to access FOXEL camera calibration data values in the
     *  fastest and safest way. This library is mainly used for research purpose and will
     *  probably not leave alpha 0.1 state.
     *
     *  \section Copyright
     * 
     *  Copyright (c) 2013-2014 FOXEL SA - http://foxel.ch \n
     *  This program is part of the FOXEL project <http://foxel.ch>.
     *  
     *  Please read the COPYRIGHT.md file for more information.
     *
     *  \section License
     *
     *  This program is licensed under the terms of the GNU Affero General Public License
     *  v3 (GNU AGPL), with two additional terms. The content is licensed under the terms 
     *  of the Creative Commons Attribution-ShareAlike 4.0 International (CC BY-SA) license.
     *
     *  You must read <http://foxel.ch/license> for more information about our Licensing
     *  terms and our Usage and Attribution guidelines.
     */

/*
    Header - Include guard
 */

    # ifndef __LF__
    # define __LF__

/*
    Header - C/C++ compatibility
 */

    # ifdef __cplusplus
    extern "C" {
    # endif

/*
    Header - Includes
 */

    # include <stdio.h>
    # include <string.h>

/*
    Header - Preprocessor definitions
 */

    /* Define fundamental constants */
    # define LF_PI              lf_Real_s( 3.14159265358979323846264338327950 )

    /* Define secondary constants */
    # define LF_PI2             ( lf_Real_s( 2.0 ) * LF_PI )

    /* Define conversion constants */
    # define LF_DEG2RAD         ( LF_PI / lf_Real_s( 180.0 ) )

/*
    Header - Preprocessor macros
 */

    /* Define casting macro */
    # define lf_Real_c( x )     ( ( lf_Real_t ) x )
    # define lf_Size_c( x )     ( ( lf_Size_t ) x )

    /* Define litteral suffix */
    # define lf_Real_s( x )     ( x ## l )
    # define lf_Size_s( x )     ( x ## l )

    /* Define formated output specifiers */
    # define lf_Real_p          "lf"
    # define lf_Size_p          "li"

    /* Define formated input specifiers */
    # define lf_Real_i          "lf"
    # define lf_Size_i          "li"

/*
    Header - Typedefs
 */

    /* Define floating point type */
    typedef double   lf_Real_t;

    /* Define generic index type */
    typedef long int lf_Size_t;

/*
    Header - Structures
 */

/*
    Header - Function prototypes
 */

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

