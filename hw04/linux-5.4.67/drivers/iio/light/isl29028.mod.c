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
	{ 0xa16a4ff1, "pm_runtime_force_resume" },
	{ 0x7c86d216, "pm_runtime_force_suspend" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0xd567ba2c, "iio_device_unregister" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc76aa310, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x80f7ee42, "__devm_iio_device_register" },
	{ 0xa625ec51, "__pm_runtime_use_autosuspend" },
	{ 0x89c33339, "pm_runtime_set_autosuspend_delay" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0xb6f50190, "regmap_get_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Cisl,isl29028");
MODULE_ALIAS("of:N*T*Cisl,isl29028C*");
MODULE_ALIAS("of:N*T*Cisil,isl29028");
MODULE_ALIAS("of:N*T*Cisil,isl29028C*");
MODULE_ALIAS("of:N*T*Cisil,isl29030");
MODULE_ALIAS("of:N*T*Cisil,isl29030C*");
MODULE_ALIAS("i2c:isl29028");
MODULE_ALIAS("i2c:isl29030");

MODULE_INFO(srcversion, "3861E81D962B6FEE4C13954");
