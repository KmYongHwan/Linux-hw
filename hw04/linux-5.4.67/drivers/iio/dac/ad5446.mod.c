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
	{ 0xb17ff434, "i2c_transfer_buffer_flags" },
	{ 0xf1de7d06, "spi_get_device_id" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xf490d28c, "__iio_device_register" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0x984d22a0, "regulator_get_voltage" },
	{ 0x1fa8ea04, "regulator_enable" },
	{ 0xfd1f31f7, "devm_regulator_get" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0xd567ba2c, "iio_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("i2c:ad5301");
MODULE_ALIAS("i2c:ad5311");
MODULE_ALIAS("i2c:ad5321");
MODULE_ALIAS("i2c:ad5602");
MODULE_ALIAS("i2c:ad5612");
MODULE_ALIAS("i2c:ad5622");
MODULE_ALIAS("spi:ad5300");
MODULE_ALIAS("spi:ad5310");
MODULE_ALIAS("spi:ad5320");
MODULE_ALIAS("spi:ad5444");
MODULE_ALIAS("spi:ad5446");
MODULE_ALIAS("spi:ad5450");
MODULE_ALIAS("spi:ad5451");
MODULE_ALIAS("spi:ad5452");
MODULE_ALIAS("spi:ad5453");
MODULE_ALIAS("spi:ad5512a");
MODULE_ALIAS("spi:ad5541a");
MODULE_ALIAS("spi:ad5542a");
MODULE_ALIAS("spi:ad5543");
MODULE_ALIAS("spi:ad5553");
MODULE_ALIAS("spi:ad5600");
MODULE_ALIAS("spi:ad5601");
MODULE_ALIAS("spi:ad5611");
MODULE_ALIAS("spi:ad5621");
MODULE_ALIAS("spi:ad5641");
MODULE_ALIAS("spi:ad5620-2500");
MODULE_ALIAS("spi:ad5620-1250");
MODULE_ALIAS("spi:ad5640-2500");
MODULE_ALIAS("spi:ad5640-1250");
MODULE_ALIAS("spi:ad5660-2500");
MODULE_ALIAS("spi:ad5660-1250");
MODULE_ALIAS("spi:ad5662");
MODULE_ALIAS("spi:dac081s101");
MODULE_ALIAS("spi:dac101s101");
MODULE_ALIAS("spi:dac121s101");
MODULE_ALIAS("spi:dac7512");

MODULE_INFO(srcversion, "EEBB36D3AC69D90588DC527");
