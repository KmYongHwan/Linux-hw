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
	{ 0xc6fd50, "iio_trigger_validate_own_device" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0x984d22a0, "regulator_get_voltage" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x80f7ee42, "__devm_iio_device_register" },
	{ 0x3f8ad58c, "devm_iio_triggered_buffer_setup" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0x67a59418, "__devm_iio_trigger_register" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x10d9ad4, "devm_iio_trigger_alloc" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0xf45bf890, "devm_regulator_bulk_get" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0xf1de7d06, "spi_get_device_id" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x28c70ba4, "iio_trigger_poll" },
	{ 0x6fc554c9, "iio_trigger_notify_done" },
	{ 0xf6ffcfd0, "iio_push_to_buffers" },
	{ 0x85b7373, "spi_sync" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x59f91a4d, "regulator_bulk_enable" },
	{ 0x8cf22ace, "regulator_bulk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2477c80f, "gpiod_set_value" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("spi:ad7766");
MODULE_ALIAS("spi:ad7766-1");
MODULE_ALIAS("spi:ad7766-2");
MODULE_ALIAS("spi:ad7767");
MODULE_ALIAS("spi:ad7767-1");
MODULE_ALIAS("spi:ad7767-2");

MODULE_INFO(srcversion, "06FDF640E622E5FE49215E8");
