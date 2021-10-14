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
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xd8a8ad6d, "devm_hwmon_device_register_with_groups" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0x3abeb957, "devm_add_action" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0x2652c06a, "__devm_reset_control_get" },
	{ 0xeb74317, "__devm_regmap_init" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x553e7cde, "devm_ioremap_resource" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x12a38747, "usleep_range" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Caspeed,ast2400-pwm-tacho");
MODULE_ALIAS("of:N*T*Caspeed,ast2400-pwm-tachoC*");
MODULE_ALIAS("of:N*T*Caspeed,ast2500-pwm-tacho");
MODULE_ALIAS("of:N*T*Caspeed,ast2500-pwm-tachoC*");

MODULE_INFO(srcversion, "C6C9D58332FC25831FFC18F");
