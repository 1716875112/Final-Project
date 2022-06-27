#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xa4b86400, "module_layout" },
	{ 0x725a8218, "cdev_del" },
	{ 0xb5739c63, "cdev_init" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xe8bc695c, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc5850110, "printk" },
	{ 0xa5cc5d9f, "kthread_stop" },
	{ 0x6626afca, "down" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0xd2198226, "cdev_add" },
	{ 0xe4b38bdc, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xcf2a6966, "up" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "61A910EAE8368EA36CA19E9");
