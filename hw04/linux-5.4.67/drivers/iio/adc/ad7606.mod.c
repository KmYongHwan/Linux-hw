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
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0x6fc554c9, "iio_trigger_notify_done" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0xe3e9bf89, "devm_gpiod_get" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x932664f1, "iio_get_time_ns" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x807a11f5, "iio_trigger_poll_chained" },
	{ 0x10d9ad4, "devm_iio_trigger_alloc" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xcb81dd8d, "devm_gpiod_get_array_optional" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0xfdb49257, "iio_triggered_buffer_postenable" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x80f7ee42, "__devm_iio_device_register" },
	{ 0x67a59418, "__devm_iio_trigger_register" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc6fd50, "iio_trigger_validate_own_device" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xe81c21aa, "iio_device_claim_direct_mode" },
	{ 0x3abeb957, "devm_add_action" },
	{ 0xfd1f31f7, "devm_regulator_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x99b13df1, "iio_triggered_buffer_predisable" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x963cf8c8, "get_device" },
	{ 0x9415ca79, "__module_get" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0x4a96006f, "gpiod_get_value" },
	{ 0xee928537, "iio_device_release_direct_mode" },
	{ 0x3f8ad58c, "devm_iio_triggered_buffer_setup" },
	{ 0x96848186, "scnprintf" },
	{ 0xf6ffcfd0, "iio_push_to_buffers" },
	{ 0x29361773, "complete" },
	{ 0x2477c80f, "gpiod_set_value" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x3bebc5aa, "gpiod_set_array_value" },
	{ 0x2bc97e5a, "device_property_present" },
	{ 0x1fa8ea04, "regulator_enable" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");


MODULE_INFO(srcversion, "48342A4841B6A9835BFD131");
