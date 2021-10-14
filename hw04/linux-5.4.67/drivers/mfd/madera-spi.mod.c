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
	{ 0xcb5bba2a, "madera_pm_ops" },
	{ 0x588030c2, "cs47l15_16bit_spi_regmap" },
	{ 0x8f656d3b, "cs47l92_16bit_spi_regmap" },
	{ 0xfbd16bca, "cs47l90_16bit_spi_regmap" },
	{ 0xa03cdd36, "cs47l85_16bit_spi_regmap" },
	{ 0x924e464e, "cs47l35_16bit_spi_regmap" },
	{ 0x588dec82, "cs47l15_32bit_spi_regmap" },
	{ 0x8f68b17b, "cs47l92_32bit_spi_regmap" },
	{ 0xfbdcb78a, "cs47l90_32bit_spi_regmap" },
	{ 0xa0310176, "cs47l85_32bit_spi_regmap" },
	{ 0x92439a0e, "cs47l35_32bit_spi_regmap" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xe08295c8, "madera_dev_init" },
	{ 0x42d6f363, "__devm_regmap_init_spi" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xebe384cb, "madera_name_from_type" },
	{ 0xf1de7d06, "spi_get_device_id" },
	{ 0xde2f691b, "madera_dev_exit" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "madera");

MODULE_ALIAS("spi:cs47l15");
MODULE_ALIAS("spi:cs47l35");
MODULE_ALIAS("spi:cs47l85");
MODULE_ALIAS("spi:cs47l90");
MODULE_ALIAS("spi:cs47l91");
MODULE_ALIAS("spi:cs42l92");
MODULE_ALIAS("spi:cs47l92");
MODULE_ALIAS("spi:cs47l93");
MODULE_ALIAS("spi:wm1840");

MODULE_INFO(srcversion, "02BA7533B3BFFF01FEFB4DC");
