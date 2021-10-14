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
	{ 0xf0207356, "mdio_driver_unregister" },
	{ 0xd399e37f, "mdio_driver_register" },
	{ 0x39b52d19, "__bitmap_and" },
	{ 0xc1d15a4c, "phylink_set_port_modes" },
	{ 0x1fa8ea04, "regulator_enable" },
	{ 0x8b6e69a6, "regulator_set_voltage" },
	{ 0xf858aaf8, "gpiod_set_value_cansleep" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x12a38747, "usleep_range" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9166fada, "strncpy" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0xb8f3a3ea, "dsa_register_switch" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xfd1f31f7, "devm_regulator_get" },
	{ 0xda6d79e9, "dsa_switch_alloc" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x4418f81d, "mdiobus_read_nested" },
	{ 0xda08cc75, "mdiobus_write_nested" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x4d2f9ac4, "dsa_unregister_switch" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "phylink,dsa_core");

MODULE_ALIAS("of:N*T*Cmediatek,mt7621");
MODULE_ALIAS("of:N*T*Cmediatek,mt7621C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt7530");
MODULE_ALIAS("of:N*T*Cmediatek,mt7530C*");

MODULE_INFO(srcversion, "835B3CEF14B8A6123EB4697");
