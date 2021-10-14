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
	{ 0xeb74317, "__devm_regmap_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0x30e70d02, "gpiod_direction_output" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xdf8c695a, "__ndelay" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x9166fada, "strncpy" },
	{ 0x4d2f9ac4, "dsa_unregister_switch" },
	{ 0xf82a295d, "gpiod_direction_input" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xda6d79e9, "dsa_switch_alloc" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0x4a96006f, "gpiod_get_value" },
	{ 0xb8f3a3ea, "dsa_register_switch" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x2477c80f, "gpiod_set_value" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xeb5bce08, "regmap_write" },
};

MODULE_INFO(depends, "dsa_core");

MODULE_ALIAS("of:N*T*Crealtek,rtl8366rb");
MODULE_ALIAS("of:N*T*Crealtek,rtl8366rbC*");
MODULE_ALIAS("of:N*T*Crealtek,rtl8366s");
MODULE_ALIAS("of:N*T*Crealtek,rtl8366sC*");

MODULE_INFO(srcversion, "97020D8896512C4D1F30F2A");
