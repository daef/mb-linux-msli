/* vi: set sw=4 ts=4: */
/*
 * Mini chgrp implementation for busybox
 *
 * Copyright (C) 1999-2004 by Erik Andersen <andersen@codepoet.org>
 *
 * Licensed under GPLv2 or later, see file LICENSE in this tarball for details.
 */

/* BB_AUDIT SUSv3 defects - none? */
/* BB_AUDIT GNU defects - unsupported long options. */
/* http://www.opengroup.org/onlinepubs/007904975/utilities/chgrp.html */

#include "libbb.h"

/* Don't use lchown glibc older then 2.1.x */
#if ((__GLIBC__ <= 2) && (__GLIBC_MINOR__ < 1)) || defined(__UC_LIBC__)
#define lchown	chown
#endif

/* This is a NOEXEC applet. Be very careful! */


int chgrp_main(int argc, char **argv) MAIN_EXTERNALLY_VISIBLE;
int chgrp_main(int argc, char **argv)
{
	/* "chgrp [opts] abc file(s)" == "chown [opts] :abc file(s)" */
	char **p = argv;
	while (*++p) {
		if (p[0][0] != '-') {
			p[0] = xasprintf(":%s", p[0]);
			break;
		}
	}
	return chown_main(argc, argv);
}
