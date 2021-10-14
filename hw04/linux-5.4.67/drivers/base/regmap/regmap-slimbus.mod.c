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
	{ 0x7fc2edbe, "slim_read" },
	{ 0xe4b7a4e1, "slim_write" },
	{ 0x7cec4410, "__regmap_init" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "slimbus");


MODULE_INFO(srcversion, "FDE8B26B1FB397DC10588E4");
