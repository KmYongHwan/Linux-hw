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
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xf7dba81e, "mtd_device_parse_register" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf330f3f1, "nand_scan_with_ids" },
	{ 0x30e70d02, "gpiod_direction_output" },
	{ 0xe3e9bf89, "devm_gpiod_get" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0x553e7cde, "devm_ioremap_resource" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x4a96006f, "gpiod_get_value" },
	{ 0x4dfd06b0, "nand_release" },
	{ 0x2477c80f, "gpiod_set_value" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mtd,nand");


MODULE_INFO(srcversion, "0B1EDAE093D22CF29C2C5F8");
