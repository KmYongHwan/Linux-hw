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
	{ 0x6c5d9750, "adis_update_scan_mode" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9d72970c, "adis_read_reg" },
	{ 0x16fa4040, "adis_single_conversion" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf490d28c, "__iio_device_register" },
	{ 0xd712134, "adis_initial_startup" },
	{ 0x249cd126, "adis_setup_buffer_and_trigger" },
	{ 0x23d145d4, "adis_init" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0xf1de7d06, "spi_get_device_id" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xb9c37235, "adis_cleanup_buffer_and_trigger" },
	{ 0x93bd7d12, "adis_write_reg" },
	{ 0xd567ba2c, "iio_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "adis_lib,industrialio");

MODULE_ALIAS("spi:adis16260");
MODULE_ALIAS("spi:adis16265");
MODULE_ALIAS("spi:adis16266");
MODULE_ALIAS("spi:adis16250");
MODULE_ALIAS("spi:adis16255");
MODULE_ALIAS("spi:adis16251");

MODULE_INFO(srcversion, "122F842F561F717DF1D8819");
