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
	{ 0xee928537, "iio_device_release_direct_mode" },
	{ 0xe81c21aa, "iio_device_claim_direct_mode" },
	{ 0x984d22a0, "regulator_get_voltage" },
	{ 0xf6ffcfd0, "iio_push_to_buffers" },
	{ 0x932664f1, "iio_get_time_ns" },
	{ 0x6fc554c9, "iio_trigger_notify_done" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x85b7373, "spi_sync" },
	{ 0xf490d28c, "__iio_device_register" },
	{ 0x8b278a1a, "iio_triggered_buffer_setup" },
	{ 0x1fa8ea04, "regulator_enable" },
	{ 0xfd1f31f7, "devm_regulator_get" },
	{ 0xf1de7d06, "spi_get_device_id" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0x730aa4, "iio_triggered_buffer_cleanup" },
	{ 0xd567ba2c, "iio_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("spi:adc141s626");
MODULE_ALIAS("spi:adc161s626");
MODULE_ALIAS("of:N*T*Cti,adc141s626");
MODULE_ALIAS("of:N*T*Cti,adc141s626C*");
MODULE_ALIAS("of:N*T*Cti,adc161s626");
MODULE_ALIAS("of:N*T*Cti,adc161s626C*");

MODULE_INFO(srcversion, "7BCDB9BD04091D50B7D7000");
