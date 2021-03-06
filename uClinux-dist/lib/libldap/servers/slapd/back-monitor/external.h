/*
 * Copyright 1998-2003 The OpenLDAP Foundation, All Rights Reserved.
 * COPYING RESTRICTIONS APPLY, see COPYRIGHT file
 */
/*
 * Copyright 2001, Pierangelo Masarati, All rights reserved. <ando@sys-net.it>
 * 
 * This work has beed deveolped for the OpenLDAP Foundation 
 * in the hope that it may be useful to the Open Source community, 
 * but WITHOUT ANY WARRANTY.
 * 
 * Permission is granted to anyone to use this software for any purpose
 * on any computer system, and to alter it and redistribute it, subject
 * to the following restrictions:
 * 
 * 1. The author and SysNet s.n.c. are not responsible for the consequences
 *    of use of this software, no matter how awful, even if they arise from
 *    flaws in it.
 * 
 * 2. The origin of this software must not be misrepresented, either by
 *    explicit claim or by omission.  Since few users ever read sources,
 *    credits should appear in the documentation.
 * 
 * 3. Altered versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.  Since few users
 *    ever read sources, credits should appear in the documentation.
 *    SysNet s.n.c. cannot be responsible for the consequences of the
 *    alterations.
 * 
 * 4. This notice may not be removed or altered.
 */

#ifndef _MONITOR_EXTERNAL_H
#define _MONITOR_EXTERNAL_H

LDAP_BEGIN_DECL

extern BI_init	monitor_back_initialize;
extern BI_db_init	monitor_back_db_init;
extern BI_db_open	monitor_back_db_open;
extern BI_config	monitor_back_config;
extern BI_db_config	monitor_back_db_config;

extern BI_db_destroy	monitor_back_db_destroy;

extern BI_op_search	monitor_back_search;
extern BI_op_compare	monitor_back_compare;
extern BI_op_modify	monitor_back_modify;
extern BI_op_bind	monitor_back_bind;
extern BI_operational	monitor_back_operational;

LDAP_END_DECL

#endif /* _MONITOR_EXTERNAL_H */
