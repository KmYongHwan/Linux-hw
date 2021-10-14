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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x931d3975, "__pm_runtime_idle" },
	{ 0x7c86d216, "pm_runtime_force_suspend" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0xa625ec51, "__pm_runtime_use_autosuspend" },
	{ 0xad6318ed, "iio_read_const_attr" },
	{ 0xc76aa310, "__pm_runtime_suspend" },
	{ 0x6fc554c9, "iio_trigger_notify_done" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0xe93f923f, "regmap_bulk_read" },
	{ 0xa16a4ff1, "pm_runtime_force_resume" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0xb2c20827, "regmap_read" },
	{ 0xd567ba2c, "iio_device_unregister" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x932664f1, "iio_get_time_ns" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x807a11f5, "iio_trigger_poll_chained" },
	{ 0x10d9ad4, "devm_iio_trigger_alloc" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0xfdb49257, "iio_triggered_buffer_postenable" },
	{ 0x67a59418, "__devm_iio_trigger_register" },
	{ 0xc030aca9, "iio_trigger_using_own" },
	{ 0xf490d28c, "__iio_device_register" },
	{ 0x37fb925b, "pm_runtime_autosuspend_expiration" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xe81c21aa, "iio_device_claim_direct_mode" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xfd1f31f7, "devm_regulator_get" },
	{ 0x12a38747, "usleep_range" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0x99b13df1, "iio_triggered_buffer_predisable" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xee928537, "iio_device_release_direct_mode" },
	{ 0x3f8ad58c, "devm_iio_triggered_buffer_setup" },
	{ 0xf6ffcfd0, "iio_push_to_buffers" },
	{ 0x89c33339, "pm_runtime_set_autosuspend_delay" },
	{ 0x29361773, "complete" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0x1fa8ea04, "regulator_enable" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");


MODULE_INFO(srcversion, "4FEBA882C862892BA7C1951");
