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
    Source - Calibration data
 */

    # include "fastcal-eyesis4pi-data.h"

/*
    Source - Eyesis4pi-specific calibration data server
 */

    lf_Real_t lf_eyesis4pi_sensor( lf_Size_t const lfIndex, lf_Size_t const lfData, lf_Size_t const lfChannel, lf_Size_t * const lfStatus ) {

        /* Initialize status */
        * lfStatus = LF_SUCCESS;

        /* Switch on calibration value */
        if ( lfData == LF_EYESIS4PI_FOCAL ) {

            /* Return calibration data */
            return( lfCalibFocal[lfIndex][lfChannel] );

        } else 
        if ( lfData == LF_EYESIS4PI_AZIMUTH ) {

            /* Return calibration data */
            return( lfCalibAzimuth[lfIndex][lfChannel] * LF_DEG2RAD );

        } else
        if ( lfData == LF_EYESIS4PI_ELEVATION ) {

            /* Return calibration data */
            return( lfCalibElevation[lfIndex][lfChannel] * LF_DEG2RAD );

        } else
        if ( lfData == LF_EYESIS4PI_HEADING ) {

            /* Return calibration data */
            return( lfCalibHeading[lfIndex][lfChannel] * LF_DEG2RAD );

        } else
        if ( lfData == LF_EYESIS4PI_PIXELSIZE ) {

            /* Return calibration data */
            return( lfCalibPixelSize[lfIndex][lfChannel] * lf_Real_s( 0.001 ) );

        } else
        if ( lfData == LF_EYESIS4PI_PX0 ) {

            /* Return calibration data */
            return( lfCalibPx0[lfIndex][lfChannel] );

        } else 
        if ( lfData == LF_EYESIS4PI_PY0 ) {

            /* Return calibration data */
            return( lfCalibPy0[lfIndex][lfChannel] );

        } else
        if ( lfData == LF_EYESIS4PI_ROLL ) {

            /* Return calibration data */
            return( lfCalibRoll[lfIndex][lfChannel] * LF_DEG2RAD );

        } else
        if ( lfData == LF_EYESIS4PI_PANWIDTH ) {

            /* Return calibration data */
            return( lfCalibPanWidth[lfIndex][lfChannel] );

        } else
        if ( lfData == LF_EYESIS4PI_PANHEIGHT ) {

            /* Return calibration data */
            return( lfCalibPanHeight[lfIndex][lfChannel] );

        } else
        if ( lfData == LF_EYESIS4PI_XPOSITION ) {

            /* Return calibration data */
            return( lfCalibXPosition[lfIndex][lfChannel] );

        } else
        if ( lfData == LF_EYESIS4PI_YPOSITION ) {

            /* Return calibration data */
            return( lfCalibYPosition[lfIndex][lfChannel] );

        } else
        if ( lfData == LF_EYESIS4PI_SENWIDTH ) {

            /* Return calibration data */
            return( lfCalibSensorWidth[lfIndex][lfChannel] );

        } else
        if ( lfData == LF_EYESIS4PI_SENHEIGHT ) {

            /* Return calibration data */
            return( lfCalibSensorHeight[lfIndex][lfChannel] );

        } else
        if ( lfData == LF_EYESIS4PI_RADIUS ) {

            /* Return calibration data */
            return( lfCalibRadius[lfIndex][lfChannel] * lf_Real_s( 0.001 ) );

        } else
        if ( lfData == LF_EYESIS4PI_HEIGHT ) {

            /* Return calibration data */
            return( lfCalibHeight[lfIndex][lfChannel] * lf_Real_s( 0.001 ) );

        } else
        if ( lfData == LF_EYESIS4PI_PUPFORWARD ) {

            /* Return calibration data */
            return( lfCalibPupForward[lfIndex][lfChannel] * lf_Real_s( 0.001 ) );

        }

        /* Update status */
        * lfStatus = LF_FAIL;

        /* Return null value */
        return( lf_Real_s( 0.0 ) );

    }

