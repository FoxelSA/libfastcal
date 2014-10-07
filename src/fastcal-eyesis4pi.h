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
    # include "fastcal-eyesis4pi-data.h"

/*
    Header - Preprocessor definitions
 */

    /* Eyesis4pi devices index */
    # define LF_EYESIS4PI_1             "00:0E:64:08:1B:6E" /* Eyesis4Pi-1 */
    # define LF_EYESIS4PI_2             "00:0E:64:08:1C:D2" /* Eyesis4Pi-2 */

    /* Calibration data string tags */
    # define LF_EYESIS4PI_FOCAL         "focal-length"
    # define LF_EYESIS4PI_AZIMUTH       "azimuth"
    # define LF_EYESIS4PI_ELEVATION     "elevation"
    # define LF_EYESIS4PI_HEADING       "heading"
    # define LF_EYESIS4PI_PIXELSIZE     "pixel-size"
    # define LF_EYESIS4PI_PX0           "px0"
    # define LF_EYESIS4PI_PY0           "py0"
    # define LF_EYESIS4PI_ROLL          "roll"
    # define LF_EYESIS4PI_PANWIDTH      "panorama-width"
    # define LF_EYESIS4PI_PANHEIGHT     "panorama-height"
    # define LF_EYESIS4PI_XPOSITION     "x-position"
    # define LF_EYESIS4PI_YPOSITION     "y-position"
    # define LF_EYESIS4PI_SENWIDTH      "sensor-width"
    # define LF_EYESIS4PI_SENHEIGHT     "sensor-height"
    # define LF_EYESIS4PI_RADIUS        "radius"
    # define LF_EYESIS4PI_HEIGHT        "height"
    # define LF_EYESIS4PI_PUPFORWARD    "entrance-pupil-forward"

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
     *  \return Returns calibration data value
     */

    lf_Real_t lf_eyesis4pi( const lf_Size_t lfIndex, const char const * lfData, const lf_Size_t lfChannel );

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

