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
	{ 0x124bad4d, "kstrtobool" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xf490d28c, "__iio_device_register" },
	{ 0x59f91a4d, "regulator_bulk_enable" },
	{ 0xf45bf890, "devm_regulator_bulk_get" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0xf1de7d06, "spi_get_device_id" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x984d22a0, "regulator_get_voltage" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x85b7373, "spi_sync" },
	{ 0x8cf22ace, "regulator_bulk_disable" },
	{ 0x37a0cba, "kfree" },
	{ 0xd567ba2c, "iio_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("spi:ad5360");
MODULE_ALIAS("spi:ad5361");
MODULE_ALIAS("spi:ad5362");
MODULE_ALIAS("spi:ad5363");
MODULE_ALIAS("spi:ad5370");
MODULE_ALIAS("spi:ad5371");
MODULE_ALIAS("spi:ad5372");
MODULE_ALIAS("spi:ad5373");

MODULE_INFO(srcversion, "BE8E5A826CE32FEFAF3958F");
