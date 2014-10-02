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

    # include "fastcal-query.h"

/*
    Source - Principal query interface
 */

    lf_Real_t lf_query( const char const * lfDevice, const char const * lfData, lf_Size_t lfChannel ) {

        /* Switch on camera device */
        if ( strcmp( lfDevice, LF_EYESIS4PI_DEVICE_1 ) == 0 ) {

            /* Call device-specific calibration access */
            return( lf_eyesis4pi( lfDevice, 0, lfData, lfChannel ) );

        } else if ( strcmp( lfDevice, LF_EYESIS4PI_DEVICE_2 ) == 0 ) {

            /* Call device-specific calibration access */
            return( lf_eyesis4pi( lfDevice, 1, lfData, lfChannel ) );

        }

        /* Display message */
        fprintf( stdout, "Error : Device not found\n" );

        /* Return null value */
        return( lf_Real_s( 0.0 ) );

    }
