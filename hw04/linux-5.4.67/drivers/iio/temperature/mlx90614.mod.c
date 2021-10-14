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
	{ 0xad6318ed, "iio_read_const_attr" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xc76aa310, "__pm_runtime_suspend" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xf490d28c, "__iio_device_register" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0xa625ec51, "__pm_runtime_use_autosuspend" },
	{ 0x89c33339, "pm_runtime_set_autosuspend_delay" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0xd567ba2c, "iio_device_unregister" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc946d02b, "i2c_smbus_xfer" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xdfec67c9, "i2c_smbus_read_word_data" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf82a295d, "gpiod_direction_input" },
	{ 0xf9a482f9, "msleep" },
	{ 0x30e70d02, "gpiod_direction_output" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Cmelexis,mlx90614");
MODULE_ALIAS("of:N*T*Cmelexis,mlx90614C*");
MODULE_ALIAS("i2c:mlx90614");

MODULE_INFO(srcversion, "D197D9A4A7243053D453689");
