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
	{ 0xa87833ff, "wm8350_reg_write" },
	{ 0x4d64a33f, "regulator_set_voltage_sel_regmap" },
	{ 0xb7d449e8, "regulator_map_voltage_linear" },
	{ 0x45f1f35b, "regulator_lock" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x48d2ebea, "regulator_get_voltage_sel_regmap" },
	{ 0x20c596ce, "wm8350_set_bits" },
	{ 0x4d001d6, "wm8350_clear_bits" },
	{ 0x44246f71, "regulator_notifier_call_chain" },
	{ 0x222e5aca, "regulator_map_voltage_linear_range" },
	{ 0x4530cfec, "platform_device_alloc" },
	{ 0xf39aaf26, "platform_device_add" },
	{ 0x4851cb9, "regulator_list_voltage_linear_range" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xb8070965, "regulator_list_voltage_linear" },
	{ 0x4a8c2861, "rdev_get_drvdata" },
	{ 0xaefd15fd, "regulator_disable_regmap" },
	{ 0xa19862fa, "rdev_get_id" },
	{ 0xfc49dd4b, "regulator_enable_regmap" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9a5fab57, "regulator_get_current_limit_regmap" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xc7fd66d4, "regulator_is_enabled_regmap" },
	{ 0x46d5c002, "regulator_set_current_limit_regmap" },
	{ 0x47cc26de, "regulator_unlock" },
	{ 0x51cb89cd, "wm8350_reg_read" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x86c80eb8, "devm_regulator_register" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xf5ee1308, "platform_device_put" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A0E3C484EA7E0115EC1B17E");
