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
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0xfdb49257, "iio_triggered_buffer_postenable" },
	{ 0xd567ba2c, "iio_device_unregister" },
	{ 0xf9a482f9, "msleep" },
	{ 0xee928537, "iio_device_release_direct_mode" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0xe81c21aa, "iio_device_claim_direct_mode" },
	{ 0xc76aa310, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0x99b13df1, "iio_triggered_buffer_predisable" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0x730aa4, "iio_triggered_buffer_cleanup" },
	{ 0x96f138a7, "iio_trigger_unregister" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xf490d28c, "__iio_device_register" },
	{ 0xa625ec51, "__pm_runtime_use_autosuspend" },
	{ 0x89c33339, "pm_runtime_set_autosuspend_delay" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x8b278a1a, "iio_triggered_buffer_setup" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0x52e66277, "__iio_trigger_register" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0x10d9ad4, "devm_iio_trigger_alloc" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xb2c20827, "regmap_read" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2057f44d, "regmap_bulk_write" },
	{ 0xf6ffcfd0, "iio_push_to_buffers" },
	{ 0x932664f1, "iio_get_time_ns" },
	{ 0x6fc554c9, "iio_trigger_notify_done" },
	{ 0xe93f923f, "regmap_bulk_read" },
	{ 0x28c70ba4, "iio_trigger_poll" },
	{ 0xcfb5871c, "irq_work_queue" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("of:N*T*Catlas,ph-sm");
MODULE_ALIAS("of:N*T*Catlas,ph-smC*");
MODULE_ALIAS("of:N*T*Catlas,ec-sm");
MODULE_ALIAS("of:N*T*Catlas,ec-smC*");
MODULE_ALIAS("of:N*T*Catlas,orp-sm");
MODULE_ALIAS("of:N*T*Catlas,orp-smC*");
MODULE_ALIAS("i2c:atlas-ph-sm");
MODULE_ALIAS("i2c:atlas-ec-sm");
MODULE_ALIAS("i2c:atlas-orp-sm");

MODULE_INFO(srcversion, "C72E1B32E8F9507E2288DC4");
