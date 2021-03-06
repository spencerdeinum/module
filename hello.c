/*
 * hello.c     Hello world kernel module.
 */
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Spencer Deinum <spencerdeinum@gmail.com>");
MODULE_DESCRIPTION("A polite hello module");
MODULE_VERSION("0.0");

static int __init hello_init(void) {
    printk(KERN_DEBUG "Hello World!\n");
    return 0;
}

static void __exit hello_exit(void) {
}

module_init(hello_init);
module_exit(hello_exit);
