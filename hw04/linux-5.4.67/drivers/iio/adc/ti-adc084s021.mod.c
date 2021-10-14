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
	{ 0x99b13df1, "iio_triggered_buffer_predisable" },
	{ 0xfdb49257, "iio_triggered_buffer_postenable" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0x80f7ee42, "__devm_iio_device_register" },
	{ 0x3f8ad58c, "devm_iio_triggered_buffer_setup" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xfd1f31f7, "devm_regulator_get" },
	{ 0xf1de7d06, "spi_get_device_id" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0x984d22a0, "regulator_get_voltage" },
	{ 0xee928537, "iio_device_release_direct_mode" },
	{ 0xe81c21aa, "iio_device_claim_direct_mode" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x6fc554c9, "iio_trigger_notify_done" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xf6ffcfd0, "iio_push_to_buffers" },
	{ 0x932664f1, "iio_get_time_ns" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x85b7373, "spi_sync" },
	{ 0x1fa8ea04, "regulator_enable" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("spi:adc084s021");
MODULE_ALIAS("of:N*T*Cti,adc084s021");
MODULE_ALIAS("of:N*T*Cti,adc084s021C*");

MODULE_INFO(srcversion, "6FD180E815A88AA72A413EE");
