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
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x12a38747, "usleep_range" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe93f923f, "regmap_bulk_read" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf490d28c, "__iio_device_register" },
	{ 0x25e4c3be, "iio_map_array_register" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0x8f2b780b, "iio_map_array_unregister" },
	{ 0xd567ba2c, "iio_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("platform:axp288_adc");

MODULE_INFO(srcversion, "2BEA42EF1555A4179BDD488");
