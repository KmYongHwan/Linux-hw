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
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0xa625ec51, "__pm_runtime_use_autosuspend" },
	{ 0xf60888f1, "regmap_register_patch" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0xb93527f1, "mfd_remove_devices" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xb2c20827, "regmap_read" },
	{ 0xf45bf890, "devm_regulator_bulk_get" },
	{ 0x59f91a4d, "regulator_bulk_enable" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x6bb624d0, "mfd_add_devices" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x8cf22ace, "regulator_bulk_disable" },
	{ 0x12a38747, "usleep_range" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0xd68e1e2b, "regcache_mark_dirty" },
	{ 0xc1573d6a, "regulator_put" },
	{ 0x89c33339, "pm_runtime_set_autosuspend_delay" },
	{ 0xc88d8e8e, "gpiod_set_raw_value_cansleep" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xeb561ef, "regulator_get" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0x826c3a9c, "regcache_sync" },
	{ 0x67d5a9db, "regcache_cache_only" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x1fa8ea04, "regulator_enable" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Ccirrus,cs47l15");
MODULE_ALIAS("of:N*T*Ccirrus,cs47l15C*");
MODULE_ALIAS("of:N*T*Ccirrus,cs47l35");
MODULE_ALIAS("of:N*T*Ccirrus,cs47l35C*");
MODULE_ALIAS("of:N*T*Ccirrus,cs47l85");
MODULE_ALIAS("of:N*T*Ccirrus,cs47l85C*");
MODULE_ALIAS("of:N*T*Ccirrus,cs47l90");
MODULE_ALIAS("of:N*T*Ccirrus,cs47l90C*");
MODULE_ALIAS("of:N*T*Ccirrus,cs47l91");
MODULE_ALIAS("of:N*T*Ccirrus,cs47l91C*");
MODULE_ALIAS("of:N*T*Ccirrus,cs42l92");
MODULE_ALIAS("of:N*T*Ccirrus,cs42l92C*");
MODULE_ALIAS("of:N*T*Ccirrus,cs47l92");
MODULE_ALIAS("of:N*T*Ccirrus,cs47l92C*");
MODULE_ALIAS("of:N*T*Ccirrus,cs47l93");
MODULE_ALIAS("of:N*T*Ccirrus,cs47l93C*");
MODULE_ALIAS("of:N*T*Ccirrus,wm1840");
MODULE_ALIAS("of:N*T*Ccirrus,wm1840C*");

MODULE_INFO(srcversion, "9894080EA7FC87020D529F2");
