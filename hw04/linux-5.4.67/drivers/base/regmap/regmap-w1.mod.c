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
	{ 0xde3f3b95, "w1_reset_select_slave" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x7cec4410, "__regmap_init" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x13cb80df, "w1_write_8" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xccb61200, "w1_read_8" },
};

MODULE_INFO(depends, "wire");


MODULE_INFO(srcversion, "C25E8657F9884BD670D1373");
