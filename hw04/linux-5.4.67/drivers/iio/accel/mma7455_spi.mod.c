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
	{ 0x29ffb24b, "mma7455_core_probe" },
	{ 0x42d6f363, "__devm_regmap_init_spi" },
	{ 0x718dac7d, "mma7455_core_regmap" },
	{ 0xf1de7d06, "spi_get_device_id" },
	{ 0x366f6f38, "mma7455_core_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mma7455_core");

MODULE_ALIAS("spi:mma7455");
MODULE_ALIAS("spi:mma7456");

MODULE_INFO(srcversion, "D3E005012D44BEEA8EA82EE");
