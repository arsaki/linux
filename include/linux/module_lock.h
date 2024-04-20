/*
 * Module lock:
 * 	Copyright (C) 2024, Akimov Arsenii <arseniumfrela@bk.ru>
 *
 * 	Definition module_lock_handler
 *
 * 		Started by: Akimov Arsenii
 *
 * 		For licensing details see kernel-base/COPYING
 */
#ifndef _LINUX_MODULE_LOCK
#define _LINUX_MODULE_LOCK

#include <linux/module.h>
extern struct list_head modules;
extern char * module_lock_list;
extern struct mutex module_mutex;
int module_lock_handler(struct ctl_table *table, int write,
                                       void *buffer, size_t *lenp, loff_t *ppos);
#endif /* _LINUX_MODULE_LOCK */
 
