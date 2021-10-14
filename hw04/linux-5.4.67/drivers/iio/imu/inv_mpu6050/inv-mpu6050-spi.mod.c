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
	{ 0x42d6f363, "__devm_regmap_init_spi" },
	{ 0x6670f93d, "inv_mpu_pmops" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0xd52c37ad, "acpi_match_device" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xeb9cd368, "inv_mpu6050_set_power_itg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf208263e, "inv_mpu_core_probe" },
	{ 0xf1de7d06, "spi_get_device_id" },
	{ 0xeb5bce08, "regmap_write" },
};

MODULE_INFO(depends, "inv-mpu6050");

MODULE_ALIAS("spi:mpu6000");
MODULE_ALIAS("spi:mpu6500");
MODULE_ALIAS("spi:mpu9150");
MODULE_ALIAS("spi:mpu9250");
MODULE_ALIAS("spi:mpu9255");
MODULE_ALIAS("spi:icm20608");
MODULE_ALIAS("spi:icm20602");
MODULE_ALIAS("acpi*:INVN6000:*");

MODULE_INFO(srcversion, "84A6C69BAB3F8400987E1A7");
