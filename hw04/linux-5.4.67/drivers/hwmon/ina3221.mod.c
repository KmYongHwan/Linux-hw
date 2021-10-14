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
	{ 0xa16a4ff1, "pm_runtime_force_resume" },
	{ 0x7c86d216, "pm_runtime_force_suspend" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x12a38747, "usleep_range" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc066a4ca, "regmap_field_read" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0xfce9c328, "devm_hwmon_device_register_with_info" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xb83fb93d, "devm_regmap_field_alloc" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x931d3975, "__pm_runtime_idle" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xd68e1e2b, "regcache_mark_dirty" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0x826c3a9c, "regcache_sync" },
	{ 0x395d7993, "regmap_field_update_bits_base" },
	{ 0x67d5a9db, "regcache_cache_only" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:ina3221");
MODULE_ALIAS("of:N*T*Cti,ina3221");
MODULE_ALIAS("of:N*T*Cti,ina3221C*");

MODULE_INFO(srcversion, "C0350252F38F4E53D702951");
