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
	{ 0xb659b1b8, "wmi_driver_unregister" },
	{ 0x169ea444, "__wmi_driver_register" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xe3c6d9e8, "sysfs_create_bin_file" },
	{ 0xf4c92a58, "wmidev_block_query" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x562cd49a, "sysfs_remove_bin_file" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "wmi");

MODULE_ALIAS("wmi:05901221-D566-11D1-B2F0-00A0C9062910");

MODULE_INFO(srcversion, "5591CFE122023642DB4B1D0");
