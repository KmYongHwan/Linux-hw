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
	{ 0x245c4f2, "cs42xx8_of_match" },
	{ 0x931d3975, "__pm_runtime_idle" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0x1371d8, "cs42xx8_probe" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xc635e075, "cs42xx8_pm" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x7cac7292, "cs42888_data" },
	{ 0xcd3794c9, "cs42448_data" },
	{ 0x4075cdcd, "cs42xx8_regmap_config" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "snd-soc-cs42xx8");

MODULE_ALIAS("i2c:cs42448");
MODULE_ALIAS("i2c:cs42888");

MODULE_INFO(srcversion, "D85D872021BFEAB3FE656AD");
