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

    # include "fastcal-parser.h"

/*
    Source - Calibration file parser
 */

    lf_Enum_t lf_parse( lf_Char_t * lfMacAddress, lf_Char_t * lfMountPoint ) {

        /* Path variables */
        lf_Char_t lfPath[256] = { 0 };

        /* File handle variables */
        FILE * lfStream = NULL;

        /* Create calibration file path */
        sprintf( ( char * ) lfPath, "%s/camera/%s/info/fastcal/calibration.key", lfMountPoint, lfMacAddress );

        /* Create stream handle */
        if ( ( lfStream = fopen( ( char * ) lfPath, "b" ) ) != NULL ) {

            /* ... */

            /* Return success code */
            return( LF_TRUE );
        
        } else {

            /* Return error code */
            return( LF_FALSE );

        }

    }
