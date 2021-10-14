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

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x752832c, "noop_llseek" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x59638f0d, "blkdev_fsync" },
	{ 0xcbacb13, "blkdev_write_iter" },
	{ 0x303ac34a, "blkdev_read_iter" },
	{ 0xdefbea52, "default_llseek" },
	{ 0x8f1e938c, "class_destroy" },
	{ 0x999e8297, "vfree" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xc5399abe, "cdev_del" },
	{ 0x66414bc7, "__class_create" },
	{ 0x19d1aa1e, "cdev_add" },
	{ 0x40748904, "cdev_init" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xc5850110, "printk" },
	{ 0x323503d8, "blkdev_ioctl" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88e96942, "device_create" },
	{ 0x8aeb7a6b, "device_destroy" },
	{ 0x9415ca79, "__module_get" },
	{ 0x43797d8a, "bdget" },
	{ 0xf720a60b, "module_put" },
	{ 0x83043576, "bdput" },
	{ 0xc6cbbc89, "capable" },
	{ 0x161b3ca4, "set_blocksize" },
	{ 0x437f7854, "blkdev_get" },
	{ 0x685dc43e, "bdgrab" },
	{ 0x1bd3c261, "blkdev_put" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "96D89E5C9B3F8601C0BC099");
