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
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x80f7ee42, "__devm_iio_device_register" },
	{ 0xf1de7d06, "spi_get_device_id" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0x2477c80f, "gpiod_set_value" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x85b7373, "spi_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Cti,dac7612");
MODULE_ALIAS("of:N*T*Cti,dac7612C*");
MODULE_ALIAS("of:N*T*Cti,dac7612u");
MODULE_ALIAS("of:N*T*Cti,dac7612uC*");
MODULE_ALIAS("of:N*T*Cti,dac7612ub");
MODULE_ALIAS("of:N*T*Cti,dac7612ubC*");
MODULE_ALIAS("spi:ti-dac7612");

MODULE_INFO(srcversion, "A380C8726B0C6A08C8F8AF8");
