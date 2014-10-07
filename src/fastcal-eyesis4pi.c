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


/*
    Source - Includes
 */

    # include "fastcal-eyesis4pi.h"

/*
    Source - Eyesis4pi-specific calibration data server
 */

    lf_Real_t lf_eyesis4pi( const lf_Size_t lfIndex, const char const * lfData, const lf_Size_t lfChannel ) {

        /* Calibration data variables - Focal length */
        static const lf_Real_t lfCalibFocal[2][26]        = LF_FASTCAL_EYESIS4PI_DATA_FOCAL;

        /* Calibration data variables - Azimuth */
        static const lf_Real_t lfCalibAzimuth[2][26]      = LF_FASTCAL_EYESIS4PI_DATA_AZIMUTH;

        /* Calibration data variables - Elevation */
        static const lf_Real_t lfCalibElevation[2][26]    = LF_FASTCAL_EYESIS4PI_DATA_ELEVATION;

        /* Calibration data variables - Heading */
        static const lf_Real_t lfCalibHeading[2][26]      = LF_FASTCAL_EYESIS4PI_DATA_HEADING;

        /* Calibration data variables - Pixel size */
        static const lf_Real_t lfCalibPixelSize[2][26]    = LF_FASTCAL_EYESIS4PI_DATA_PIXELSIZE;

        /* Calibration data variables - X-position of center on sensor */
        static const lf_Real_t lfCalibPx0[2][26]          = LF_FASTCAL_EYESIS4PI_DATA_PX0;

        /* Calibration data variables - Y-position of center on sensor */
         static const lf_Real_t lfCalibPy0[2][26]         = LF_FASTCAL_EYESIS4PI_DATA_PY0;

        /* Calibration data variables - Roll */
        static const lf_Real_t lfCalibRoll[2][26]         = LF_FASTCAL_EYESIS4PI_DATA_ROLL;

        /* Calibration data variables - Panorama width */
        static const lf_Real_t lfCalibPanWidth[2][26]     = LF_FASTCAL_EYESIS4PI_DATA_PANWIDTH;

        /* Calibration data variables - Panorama height */
        static const lf_Real_t lfCalibPanHeight[2][26]    = LF_FASTCAL_EYESIS4PI_DATA_PANHEIGHT;

        /* Calibration data variables - Tile x-position in panorama */
        static const lf_Real_t lfCalibXPosition[2][26]    = LF_FASTCAL_EYESIS4PI_DATA_XPOSITION;

        /* Calibration data variables - Tile y-position in panorama */
        static const lf_Real_t lfCalibYPosition[2][26]    = LF_FASTCAL_EYESIS4PI_DATA_YPOSITION;

        /* Calibration data variables - Sensor width */
        static const lf_Real_t lfCalibSensorWidth[2][26]  = LF_FASTCAL_EYESIS4PI_DATA_SENWIDTH;

        /* Calibration data variables - Sensor width */
        static const lf_Real_t lfCalibSensorHeight[2][26] = LF_FASTCAL_EYESIS4PI_DATA_SENHEIGHT;

        /* Calibration data variables - Radius */
        static const lf_Real_t lfCalibRadius[2][26]       = LF_FASTCAL_EYESIS4PI_DATA_RADIUS;

        /* Calibration data variables - Height */
        static const lf_Real_t lfCalibHeight[2][26]       = LF_FASTCAL_EYESIS4PI_DATA_HEIGHT;

        /* Calibration data variables - Entrance pupil forward */
        static const lf_Real_t lfCalibPupForward[2][26]   = LF_FASTCAL_EYESIS4PI_DATA_PUPFORWARD;

        /* Switch on calibration value */
        if ( strcasecmp( lfData, LF_EYESIS4PI_FOCAL ) == 0 ) {

            /* Return calibration data */
            return( lfCalibFocal[lfIndex][lfChannel] );

        } else 
        if ( strcasecmp( lfData, LF_EYESIS4PI_AZIMUTH ) == 0 ) {

            /* Return calibration data */
            return( lfCalibAzimuth[lfIndex][lfChannel] * LF_DEG2RAD );

        } else
        if ( strcasecmp( lfData, LF_EYESIS4PI_ELEVATION ) == 0 ) {

            /* Return calibration data */
            return( lfCalibElevation[lfIndex][lfChannel] * LF_DEG2RAD );

        } else
        if ( strcasecmp( lfData, LF_EYESIS4PI_HEADING ) == 0 ) {

            /* Return calibration data */
            return( lfCalibHeading[lfIndex][lfChannel] * LF_DEG2RAD );

        } else
        if ( strcasecmp( lfData, LF_EYESIS4PI_PIXELSIZE ) == 0 ) {

            /* Return calibration data */
            return( lfCalibPixelSize[lfIndex][lfChannel] * lf_Real_s( 0.001 ) );

        } else
        if ( strcasecmp( lfData, LF_EYESIS4PI_PX0 ) == 0 ) {

            /* Return calibration data */
            return( lfCalibPx0[lfIndex][lfChannel] );

        } else if ( strcasecmp( lfData, LF_EYESIS4PI_PY0 ) == 0 ) {

            /* Return calibration data */
            return( lfCalibPy0[lfIndex][lfChannel] );

        } else
        if ( strcasecmp( lfData, LF_EYESIS4PI_ROLL ) == 0 ) {

            /* Return calibration data */
            return( lfCalibRoll[lfIndex][lfChannel] * LF_DEG2RAD );

        } else
        if ( strcasecmp( lfData, LF_EYESIS4PI_PANWIDTH ) == 0 ) {

            /* Return calibration data */
            return( lfCalibPanWidth[lfIndex][lfChannel] );

        } else
        if ( strcasecmp( lfData, LF_EYESIS4PI_PANHEIGHT ) == 0 ) {

            /* Return calibration data */
            return( lfCalibPanHeight[lfIndex][lfChannel] );

        } else
        if ( strcasecmp( lfData, LF_EYESIS4PI_XPOSITION ) == 0 ) {

            /* Return calibration data */
            return( lfCalibXPosition[lfIndex][lfChannel] );

        } else
        if ( strcasecmp( lfData, LF_EYESIS4PI_YPOSITION ) == 0 ) {

            /* Return calibration data */
            return( lfCalibYPosition[lfIndex][lfChannel] );

        } else
        if ( strcasecmp( lfData, LF_EYESIS4PI_SENWIDTH ) == 0 ) {

            /* Return calibration data */
            return( lfCalibSensorWidth[lfIndex][lfChannel] );

        } else
        if ( strcasecmp( lfData, LF_EYESIS4PI_SENHEIGHT ) == 0 ) {

            /* Return calibration data */
            return( lfCalibSensorHeight[lfIndex][lfChannel] );

        } else
        if ( strcasecmp( lfData, LF_EYESIS4PI_RADIUS ) == 0 ) {

            /* Return calibration data */
            return( lfCalibRadius[lfIndex][lfChannel] );

        } else
        if ( strcasecmp( lfData, LF_EYESIS4PI_HEIGHT ) == 0 ) {

            /* Return calibration data */
            return( lfCalibHeight[lfIndex][lfChannel] );

        } else
        if ( strcasecmp( lfData, LF_EYESIS4PI_PUPFORWARD ) == 0 ) {

            /* Return calibration data */
            return( lfCalibPupForward[lfIndex][lfChannel] );

        }

        /* Display message */
        fprintf( stdout, "Error : Calibration data not found\n" );

        /* Return null value */
        return( lf_Real_s( 0.0 ) );

    }

