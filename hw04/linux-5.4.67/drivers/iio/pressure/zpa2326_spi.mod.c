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
	{ 0x76cbd333, "zpa2326_isreg_precious" },
	{ 0xcbc42181, "zpa2326_isreg_readable" },
	{ 0x381876f5, "zpa2326_isreg_writeable" },
	{ 0x672aa611, "zpa2326_pm_ops" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x9585f30, "zpa2326_probe" },
	{ 0xf1de7d06, "spi_get_device_id" },
	{ 0x8392a4c1, "spi_setup" },
	{ 0x42d6f363, "__devm_regmap_init_spi" },
	{ 0x6e6edfa6, "zpa2326_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "zpa2326");

MODULE_ALIAS("spi:zpa2326");

MODULE_INFO(srcversion, "0D7CBA692A91F42201B78BC");
