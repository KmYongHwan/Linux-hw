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
	{ 0x588f0134, "iio_enum_available_read" },
	{ 0x6ec70757, "iio_enum_write" },
	{ 0x51c6dcb2, "iio_enum_read" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0x85b7373, "spi_sync" },
	{ 0x984d22a0, "regulator_get_voltage" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xb17ff434, "i2c_transfer_buffer_flags" },
	{ 0xf1de7d06, "spi_get_device_id" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xf45bf890, "devm_regulator_bulk_get" },
	{ 0xf490d28c, "__iio_device_register" },
	{ 0x59f91a4d, "regulator_bulk_enable" },
	{ 0x4fc91a1f, "devm_regulator_get_optional" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8cf22ace, "regulator_bulk_disable" },
	{ 0xd567ba2c, "iio_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("i2c:ad5625");
MODULE_ALIAS("i2c:ad5625r-1v25");
MODULE_ALIAS("i2c:ad5625r-2v5");
MODULE_ALIAS("i2c:ad5627");
MODULE_ALIAS("i2c:ad5627r-1v25");
MODULE_ALIAS("i2c:ad5627r-2v5");
MODULE_ALIAS("i2c:ad5629-1");
MODULE_ALIAS("i2c:ad5629-2");
MODULE_ALIAS("i2c:ad5629-3");
MODULE_ALIAS("i2c:ad5645r-1v25");
MODULE_ALIAS("i2c:ad5645r-2v5");
MODULE_ALIAS("i2c:ad5665");
MODULE_ALIAS("i2c:ad5665r-1v25");
MODULE_ALIAS("i2c:ad5665r-2v5");
MODULE_ALIAS("i2c:ad5667");
MODULE_ALIAS("i2c:ad5667r-1v25");
MODULE_ALIAS("i2c:ad5667r-2v5");
MODULE_ALIAS("i2c:ad5669-1");
MODULE_ALIAS("i2c:ad5669-2");
MODULE_ALIAS("i2c:ad5669-3");
MODULE_ALIAS("i2c:ltc2606");
MODULE_ALIAS("i2c:ltc2607");
MODULE_ALIAS("i2c:ltc2609");
MODULE_ALIAS("i2c:ltc2616");
MODULE_ALIAS("i2c:ltc2617");
MODULE_ALIAS("i2c:ltc2619");
MODULE_ALIAS("i2c:ltc2626");
MODULE_ALIAS("i2c:ltc2627");
MODULE_ALIAS("i2c:ltc2629");
MODULE_ALIAS("i2c:ltc2631-l12");
MODULE_ALIAS("i2c:ltc2631-h12");
MODULE_ALIAS("i2c:ltc2631-l10");
MODULE_ALIAS("i2c:ltc2631-h10");
MODULE_ALIAS("i2c:ltc2631-l8");
MODULE_ALIAS("i2c:ltc2631-h8");
MODULE_ALIAS("i2c:ltc2633-l12");
MODULE_ALIAS("i2c:ltc2633-h12");
MODULE_ALIAS("i2c:ltc2633-l10");
MODULE_ALIAS("i2c:ltc2633-h10");
MODULE_ALIAS("i2c:ltc2633-l8");
MODULE_ALIAS("i2c:ltc2633-h8");
MODULE_ALIAS("i2c:ltc2635-l12");
MODULE_ALIAS("i2c:ltc2635-h12");
MODULE_ALIAS("i2c:ltc2635-l10");
MODULE_ALIAS("i2c:ltc2635-h10");
MODULE_ALIAS("i2c:ltc2635-l8");
MODULE_ALIAS("i2c:ltc2635-h8");
MODULE_ALIAS("spi:ad5024");
MODULE_ALIAS("spi:ad5025");
MODULE_ALIAS("spi:ad5044");
MODULE_ALIAS("spi:ad5045");
MODULE_ALIAS("spi:ad5064");
MODULE_ALIAS("spi:ad5064-1");
MODULE_ALIAS("spi:ad5065");
MODULE_ALIAS("spi:ad5628-1");
MODULE_ALIAS("spi:ad5628-2");
MODULE_ALIAS("spi:ad5648-1");
MODULE_ALIAS("spi:ad5648-2");
MODULE_ALIAS("spi:ad5666-1");
MODULE_ALIAS("spi:ad5666-2");
MODULE_ALIAS("spi:ad5668-1");
MODULE_ALIAS("spi:ad5668-2");
MODULE_ALIAS("spi:ad5668-3");

MODULE_INFO(srcversion, "0E90652E5C70E840249C89A");
