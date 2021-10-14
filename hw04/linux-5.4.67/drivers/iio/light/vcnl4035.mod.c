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
	{ 0xc6fd50, "iio_trigger_validate_own_device" },
	{ 0xad6318ed, "iio_read_const_attr" },
	{ 0x872f0d1d, "iio_validate_scan_mask_onehot" },
	{ 0xa16a4ff1, "pm_runtime_force_resume" },
	{ 0x7c86d216, "pm_runtime_force_suspend" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0xee928537, "iio_device_release_direct_mode" },
	{ 0xe81c21aa, "iio_device_claim_direct_mode" },
	{ 0xc76aa310, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0x807a11f5, "iio_trigger_poll_chained" },
	{ 0xb22c11af, "iio_push_event" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x6fc554c9, "iio_trigger_notify_done" },
	{ 0xf6ffcfd0, "iio_push_to_buffers" },
	{ 0x932664f1, "iio_get_time_ns" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x89c33339, "pm_runtime_set_autosuspend_delay" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0xf490d28c, "__iio_device_register" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x3f8ad58c, "devm_iio_triggered_buffer_setup" },
	{ 0x67a59418, "__devm_iio_trigger_register" },
	{ 0x10d9ad4, "devm_iio_trigger_alloc" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0xd567ba2c, "iio_device_unregister" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0xa625ec51, "__pm_runtime_use_autosuspend" },
	{ 0xd68e1e2b, "regcache_mark_dirty" },
	{ 0xf9a482f9, "msleep" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0x826c3a9c, "regcache_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("of:N*T*Cvishay,vcnl4035");
MODULE_ALIAS("of:N*T*Cvishay,vcnl4035C*");

MODULE_INFO(srcversion, "743754BE3F8615921FC5862");
