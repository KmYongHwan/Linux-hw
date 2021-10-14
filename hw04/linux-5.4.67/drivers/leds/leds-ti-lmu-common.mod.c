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
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xb8d89726, "fwnode_property_read_u32_array" },
	{ 0x3a8ba51f, "device_property_read_u32_array" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xeb5bce08, "regmap_write" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FA6D13AEF283BF770326046");
