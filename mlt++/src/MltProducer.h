/**
 * MltProducer.h - MLT Wrapper
 * Copyright (C) 2004-2005 Charles Yates
 * Author: Charles Yates <charles.yates@pandora.be>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#ifndef _MLTPP_PRODUCER_H_
#define _MLTPP_PRODUCER_H_

#include <framework/mlt.h>

#include "MltService.h"

namespace Mlt
{
	class Service;

	class Producer : public Service
	{
		private:
			bool destroy;
			mlt_producer instance;
		public:
			Producer( );
			Producer( char *id, char *service = NULL );
			Producer( mlt_producer producer );
			Producer( Producer &producer );
			virtual ~Producer( );
			virtual mlt_producer get_producer( );
			mlt_service get_service( );
			int seek( mlt_position position );
			mlt_position position( );
			mlt_position frame( );
			int set_speed( double speed );
			double get_speed( );
			double get_fps( );
			int set_in_and_out( mlt_position in, mlt_position out );
			mlt_position get_in( );
			mlt_position get_out( );
			mlt_position get_length( );
			mlt_position get_playtime( );
	};
}

#endif
