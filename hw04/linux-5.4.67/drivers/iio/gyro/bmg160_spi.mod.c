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
	{ 0xab110143, "bmg160_pm_ops" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x1d8a268f, "bmg160_core_probe" },
	{ 0x42d6f363, "__devm_regmap_init_spi" },
	{ 0xf1de7d06, "spi_get_device_id" },
	{ 0x2d7666a7, "bmg160_core_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "bmg160_core");

MODULE_ALIAS("spi:bmg160");
MODULE_ALIAS("spi:bmi055_gyro");

MODULE_INFO(srcversion, "F4DA84827BF05CEFC129E72");
