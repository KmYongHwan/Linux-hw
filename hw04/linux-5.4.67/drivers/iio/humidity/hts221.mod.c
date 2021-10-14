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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6fc554c9, "iio_trigger_notify_done" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0xe93f923f, "regmap_bulk_read" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x932664f1, "iio_get_time_ns" },
	{ 0x807a11f5, "iio_trigger_poll_chained" },
	{ 0x10d9ad4, "devm_iio_trigger_alloc" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0xfdb49257, "iio_triggered_buffer_postenable" },
	{ 0x80f7ee42, "__devm_iio_device_register" },
	{ 0x67a59418, "__devm_iio_trigger_register" },
	{ 0x6d2e408f, "irq_get_irq_data" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xe81c21aa, "iio_device_claim_direct_mode" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x99b13df1, "iio_triggered_buffer_predisable" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x963cf8c8, "get_device" },
	{ 0x9415ca79, "__module_get" },
	{ 0xee928537, "iio_device_release_direct_mode" },
	{ 0x3f8ad58c, "devm_iio_triggered_buffer_setup" },
	{ 0x96848186, "scnprintf" },
	{ 0xf6ffcfd0, "iio_push_to_buffers" },
	{ 0xbca28682, "devm_request_threaded_irq" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");


MODULE_INFO(srcversion, "872AD95AF57030BB4D2802C");
