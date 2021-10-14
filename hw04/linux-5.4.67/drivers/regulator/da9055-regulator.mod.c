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
	{ 0x9a5fab57, "regulator_get_current_limit_regmap" },
	{ 0x46d5c002, "regulator_set_current_limit_regmap" },
	{ 0xc7fd66d4, "regulator_is_enabled_regmap" },
	{ 0xaefd15fd, "regulator_disable_regmap" },
	{ 0xfc49dd4b, "regulator_enable_regmap" },
	{ 0xb8070965, "regulator_list_voltage_linear" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x9ec43e96, "platform_get_irq_byname" },
	{ 0x690e053c, "devm_gpio_request_one" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x86c80eb8, "devm_regulator_register" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb2c20827, "regmap_read" },
	{ 0xb7d449e8, "regulator_map_voltage_linear" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0x4a8c2861, "rdev_get_drvdata" },
	{ 0x47cc26de, "regulator_unlock" },
	{ 0x44246f71, "regulator_notifier_call_chain" },
	{ 0x45f1f35b, "regulator_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D95DA2472B9CBC9D70494AB");
