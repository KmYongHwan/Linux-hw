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
	{ 0x931d3975, "__pm_runtime_idle" },
	{ 0x7c86d216, "pm_runtime_force_suspend" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0xa625ec51, "__pm_runtime_use_autosuspend" },
	{ 0xc76aa310, "__pm_runtime_suspend" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0xe93f923f, "regmap_bulk_read" },
	{ 0xe3e9bf89, "devm_gpiod_get" },
	{ 0xa16a4ff1, "pm_runtime_force_resume" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0xb2c20827, "regmap_read" },
	{ 0xd567ba2c, "iio_device_unregister" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf490d28c, "__iio_device_register" },
	{ 0x6d2e408f, "irq_get_irq_data" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xfd1f31f7, "devm_regulator_get" },
	{ 0x12a38747, "usleep_range" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2fb6de5d, "add_device_randomness" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x96848186, "scnprintf" },
	{ 0x89c33339, "pm_runtime_set_autosuspend_delay" },
	{ 0x29361773, "complete" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x2477c80f, "gpiod_set_value" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0x1fa8ea04, "regulator_enable" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "847BA63E319EC9C50666EC3");
