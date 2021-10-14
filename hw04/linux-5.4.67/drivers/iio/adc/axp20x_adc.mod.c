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
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xf490d28c, "__iio_device_register" },
	{ 0x25e4c3be, "iio_map_array_register" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0x8f2b780b, "iio_map_array_unregister" },
	{ 0xd567ba2c, "iio_device_unregister" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("platform:axp20x-adc");
MODULE_ALIAS("platform:axp22x-adc");
MODULE_ALIAS("platform:axp813-adc");
MODULE_ALIAS("of:N*T*Cx-powers,axp209-adc");
MODULE_ALIAS("of:N*T*Cx-powers,axp209-adcC*");
MODULE_ALIAS("of:N*T*Cx-powers,axp221-adc");
MODULE_ALIAS("of:N*T*Cx-powers,axp221-adcC*");
MODULE_ALIAS("of:N*T*Cx-powers,axp813-adc");
MODULE_ALIAS("of:N*T*Cx-powers,axp813-adcC*");

MODULE_INFO(srcversion, "D4B3A7D617634E6E3EABC59");
