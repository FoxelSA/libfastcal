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

    /*! \file   fastcal-query.h
     *  \author Nils Hamel <n.hamel@foxel.ch>
     *
     *  Principal calibration data server
     */

/*
    Header - Include guard
 */

    # ifndef __LF_QUERY__
    # define __LF_QUERY__

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
    # include "fastcal-eyesis4pi.h"
    # include "fastcal-parser.h"

/*
    Header - Preprocessor definitions
 */

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

    /*! \brief Principal calibration data server
     *
     *  This function gives access to calibration data about sensors of any 
     *  implemented camera. The camera is pointed using a predefined tag, which
     *  correspond to the main board MAC address, given as parameter. The
     *  calibration data is obtained giving the predefined data tag. The desired
     *  sensor is specified using its index.
     *  
     *  \param lfDevice Device tag
     *  \param lfData Calibration data tag
     *  \param lfChannel Camera sensor channel number
     *  \param lfStatus Query status
     *  \return Returns calibration data value
     */

    lf_Real_t lf_query_sensor( char const * const lfDevice, lf_Size_t const lfData, lf_Size_t const lfChannel, lf_Size_t * const lfStatus );

    lf_Real_t lf_query_FocalLength ( lf_Size_t const lfChannel, lf_Descriptor_t const * const lfDesc );

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

