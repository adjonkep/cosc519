#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("Dual BSD/GPL");

static int hello_init(void){
    printk("Hello World\n");
    return 0;
}

static void hello_exit(void){
    printk("till next time!\n");
}

module_init(hello_init);
module_exit(hello_exit);
