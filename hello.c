/* hello.c
* Copyright (C) 1998 by Ori Pomerantz
*
* "Hello, world" - the kernel module version.
*/
/* The necessary header files */
/* Standard in kernel modules */
#include <linux/kernel.h> /* We’re doing kernel work */
#include <linux/module.h> /* Specifically, a module */

/* Deal with CONFIG_MODVERSIONS */
#if CONFIG_MODVERSIONS==1
#define MODVERSIONS
#include <linux/modversions.h>
#endif

/* Initialize the module */
int init_module()
{
printk("Hello, world - this is the kernel speaking\n");
/* If we return a non zero value, it means that
* init_module failed and the kernel module
* can’t be loaded */
return 0;
}
/* Cleanup - undid whatever init_module did */
void cleanup_module()
{
printk("Short is the life of a kernel module\n");
}

