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
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0xc373a5d1, "no_llseek" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x11089ac7, "_ctype" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xf058af94, "wilco_ec_mailbox" },
	{ 0x63331ce9, "simple_attr_release" },
	{ 0x8553edc1, "debugfs_attr_read" },
	{ 0xfe916dc6, "hex_dump_to_buffer" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xbb4f4766, "simple_write_to_buffer" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x90019f67, "debugfs_attr_write" },
	{ 0x9a087e18, "simple_attr_open" },
};

MODULE_INFO(depends, "wilco_ec");


MODULE_INFO(srcversion, "272F3B523CCDE1D55CB0862");
