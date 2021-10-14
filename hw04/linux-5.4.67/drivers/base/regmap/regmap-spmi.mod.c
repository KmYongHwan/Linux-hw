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
	{ 0xeb74317, "__devm_regmap_init" },
	{ 0x942bac0a, "spmi_register_read" },
	{ 0xa931a0bf, "spmi_register_zero_write" },
	{ 0x64d2bd0f, "spmi_ext_register_write" },
	{ 0x7cec4410, "__regmap_init" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6bbf5b80, "spmi_register_write" },
	{ 0x370278c2, "spmi_ext_register_readl" },
	{ 0x9ee2eef2, "spmi_ext_register_read" },
	{ 0xe9bed872, "spmi_ext_register_writel" },
};

MODULE_INFO(depends, "spmi");


MODULE_INFO(srcversion, "1E3246823CE1A9B76C01ADA");
