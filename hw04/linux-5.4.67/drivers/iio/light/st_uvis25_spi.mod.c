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
	{ 0xde911489, "st_uvis25_pm_ops" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xac197bdb, "st_uvis25_probe" },
	{ 0x42d6f363, "__devm_regmap_init_spi" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "st_uvis25_core");

MODULE_ALIAS("spi:uvis25");
MODULE_ALIAS("of:N*T*Cst,uvis25");
MODULE_ALIAS("of:N*T*Cst,uvis25C*");

MODULE_INFO(srcversion, "7F56FF720AB1225ACB08BAC");
