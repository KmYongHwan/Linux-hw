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
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0x85b7373, "spi_sync" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x73b8080, "ad_dpot_probe" },
	{ 0xf1de7d06, "spi_get_device_id" },
	{ 0x7cb9183b, "ad_dpot_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ad525x_dpot");

MODULE_ALIAS("spi:ad5160");
MODULE_ALIAS("spi:ad5161");
MODULE_ALIAS("spi:ad5162");
MODULE_ALIAS("spi:ad5165");
MODULE_ALIAS("spi:ad5200");
MODULE_ALIAS("spi:ad5201");
MODULE_ALIAS("spi:ad5203");
MODULE_ALIAS("spi:ad5204");
MODULE_ALIAS("spi:ad5206");
MODULE_ALIAS("spi:ad5207");
MODULE_ALIAS("spi:ad5231");
MODULE_ALIAS("spi:ad5232");
MODULE_ALIAS("spi:ad5233");
MODULE_ALIAS("spi:ad5235");
MODULE_ALIAS("spi:ad5260");
MODULE_ALIAS("spi:ad5262");
MODULE_ALIAS("spi:ad5263");
MODULE_ALIAS("spi:ad5290");
MODULE_ALIAS("spi:ad5291");
MODULE_ALIAS("spi:ad5292");
MODULE_ALIAS("spi:ad5293");
MODULE_ALIAS("spi:ad7376");
MODULE_ALIAS("spi:ad8400");
MODULE_ALIAS("spi:ad8402");
MODULE_ALIAS("spi:ad8403");
MODULE_ALIAS("spi:adn2850");
MODULE_ALIAS("spi:ad5270");
MODULE_ALIAS("spi:ad5271");

MODULE_INFO(srcversion, "BDDE3D7787A71ACF736E2FF");
