/* 
 * Copyright (c) 1995 The University of Utah and
 * the Computer Systems Laboratory at the University of Utah (CSL).
 * All rights reserved.
 *
 * Permission to use, copy, modify and distribute this software is hereby
 * granted provided that (1) source code retains these copyright, permission,
 * and disclaimer notices, and (2) redistributions including binaries
 * reproduce the notices in supporting documentation, and (3) all advertising
 * materials mentioning features or use of this software display the following
 * acknowledgement: ``This product includes software developed by the
 * Computer Systems Laboratory at the University of Utah.''
 *
 * THE UNIVERSITY OF UTAH AND CSL ALLOW FREE USE OF THIS SOFTWARE IN ITS "AS
 * IS" CONDITION.  THE UNIVERSITY OF UTAH AND CSL DISCLAIM ANY LIABILITY OF
 * ANY KIND FOR ANY DAMAGES WHATSOEVER RESULTING FROM THE USE OF THIS SOFTWARE.
 *
 * CSL requests users of this software to return to csl-dist@cs.utah.edu any
 * improvements that they make and grant CSL redistribution rights.
 *
 *      Author: Bryan Ford, University of Utah CSL
 */
#ifndef _UTIL_I386_I16_DEBUG_H_
#define _UTIL_I386_I16_DEBUG_H_

#include_next "debug.h"

#ifdef DEBUG

#define i16_assert(v)							\
	MACRO_BEGIN							\
		if (!(v))						\
			i16_die(__FILE__":?: failed assertion `"#v"'");	\
	MACRO_END

#else /* !DEBUG */

#define i16_assert(v) (0)

#endif /* !DEBUG */

#endif /* _UTIL_I386_I16_DEBUG_H_ */
