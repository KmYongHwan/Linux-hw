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
	{ 0x2d3385d3, "system_wq" },
	{ 0x60c5e8d9, "hid_sensor_batch_mode_supported" },
	{ 0x96f138a7, "iio_trigger_unregister" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0xa625ec51, "__pm_runtime_use_autosuspend" },
	{ 0xc76aa310, "__pm_runtime_suspend" },
	{ 0xd20a89aa, "iio_trigger_alloc" },
	{ 0x5d7db7a9, "sensor_hub_get_feature" },
	{ 0x17463ca0, "sensor_hub_device_open" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x26f6b499, "iio_str_to_fixpoint" },
	{ 0x2b545748, "hid_sensor_read_poll_value" },
	{ 0xc91144eb, "sensor_hub_device_close" },
	{ 0x52e66277, "__iio_trigger_register" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x54dce365, "hid_sensor_get_usage_index" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0xd4831c1, "sensor_hub_set_feature" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x963cf8c8, "get_device" },
	{ 0x9415ca79, "__module_get" },
	{ 0x6ddb75b6, "iio_trigger_free" },
	{ 0x626d3cbd, "iio_buffer_set_attrs" },
	{ 0xac89412b, "hid_sensor_set_report_latency" },
	{ 0x89c33339, "pm_runtime_set_autosuspend_delay" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x4e0c7403, "hid_sensor_get_report_latency" },
};

MODULE_INFO(depends, "hid-sensor-iio-common,industrialio,hid-sensor-hub");


MODULE_INFO(srcversion, "4AFA9D771A29970676E7FF4");
