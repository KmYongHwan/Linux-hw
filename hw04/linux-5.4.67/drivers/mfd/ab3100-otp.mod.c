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
	{ 0xa071f2c6, "single_release" },
	{ 0xcec6343e, "seq_read" },
	{ 0x830d73d4, "seq_lseek" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x3580f6ff, "__platform_driver_probe" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0xf559a7e9, "device_create_file" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x24043059, "abx500_get_register_page_interruptible" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x988c1bf9, "abx500_get_register_interruptible" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xc144b33e, "debugfs_remove" },
	{ 0x9f8e5a9e, "device_remove_file" },
	{ 0xc4142837, "seq_printf" },
	{ 0x70691c99, "single_open" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2DEC6D6DDEF4ADD2C7834EE");
