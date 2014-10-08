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

    /*! \file   fastcal-eyesis4pi.h
     *  \author Nils Hamel <n.hamel@foxel.ch>
     *
     *  Eyesis4pi-specific calibration data server
     */

/*
    Header - Include guard
 */

    # ifndef __LF_EYESIS4PI__
    # define __LF_EYESIS4PI__

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

    /* Eyesis4pi devices index */
    # define LF_EYESIS4PI_1             "00:0E:64:08:1B:6E" /* Eyesis4Pi-1 */
    # define LF_EYESIS4PI_2             "00:0E:64:08:1C:D2" /* Eyesis4Pi-2 */

    /* Calibration data string tags */
    # define LF_EYESIS4PI_FOCAL         lf_Size_s(  1 ) /* Focal length */
    # define LF_EYESIS4PI_AZIMUTH       lf_Size_s(  2 ) /* Azimuth */
    # define LF_EYESIS4PI_ELEVATION     lf_Size_s(  3 ) /* Elevation */
    # define LF_EYESIS4PI_HEADING       lf_Size_s(  4 ) /* Heading */
    # define LF_EYESIS4PI_PIXELSIZE     lf_Size_s(  5 ) /* Pixel size */
    # define LF_EYESIS4PI_PX0           lf_Size_s(  6 ) /* Px0 */
    # define LF_EYESIS4PI_PY0           lf_Size_s(  7 ) /* Py0 */
    # define LF_EYESIS4PI_ROLL          lf_Size_s(  8 ) /* Roll */
    # define LF_EYESIS4PI_PANWIDTH      lf_Size_s(  9 ) /* Panorama width */
    # define LF_EYESIS4PI_PANHEIGHT     lf_Size_s( 10 ) /* Panorama height */
    # define LF_EYESIS4PI_XPOSITION     lf_Size_s( 11 ) /* X-position */
    # define LF_EYESIS4PI_YPOSITION     lf_Size_s( 12 ) /* Y-position */
    # define LF_EYESIS4PI_SENWIDTH      lf_Size_s( 13 ) /* Sensor width */
    # define LF_EYESIS4PI_SENHEIGHT     lf_Size_s( 14 ) /* Sensor height */
    # define LF_EYESIS4PI_RADIUS        lf_Size_s( 15 ) /* Radius */
    # define LF_EYESIS4PI_HEIGHT        lf_Size_s( 16 ) /* Height */
    # define LF_EYESIS4PI_PUPFORWARD    lf_Size_s( 17 ) /* Entrance pupil forward */

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

    /*! \brief Eyesis4pi-specific calibration data server
     *  
     *  This function returns calibration data value of the desired
     *  sensor of the pointed eyesis4pi device.
     *  
     *  \param lfIndex Predefined index of eyesis4pi device
     *  \param lfData Calibration data tag
     *  \param lfChannel Camera sensor channel number
     *  \param lfStatus Query status
     *  \return Returns calibration data value
     */

    lf_Real_t lf_eyesis4pi_sensor( lf_Size_t const lfIndex, lf_Size_t const lfData, lf_Size_t const lfChannel, lf_Size_t * const lfStatus );

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

