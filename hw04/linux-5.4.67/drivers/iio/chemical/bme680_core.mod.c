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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xad6318ed, "iio_read_const_attr" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0xe93f923f, "regmap_bulk_read" },
	{ 0xb2c20827, "regmap_read" },
	{ 0xd52c37ad, "acpi_match_device" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0x80f7ee42, "__devm_iio_device_register" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb6f50190, "regmap_get_device" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0x9caa394e, "is_acpi_device_node" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "D9DD809574246BA0694731A");
