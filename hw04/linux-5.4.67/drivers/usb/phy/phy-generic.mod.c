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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x8d5eb965, "usb_remove_phy" },
	{ 0x815588a6, "clk_enable" },
	{ 0x30e70d02, "gpiod_direction_output" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x91226d06, "gpio_to_desc" },
	{ 0x3d32ae7, "platform_device_register_full" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xd3752c27, "atomic_notifier_call_chain" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x690e053c, "devm_gpio_request_one" },
	{ 0xfd1f31f7, "devm_regulator_get" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0x4a96006f, "gpiod_get_value" },
	{ 0xbe8e2c74, "usb_add_phy_dev" },
	{ 0x997f9924, "gpiod_to_irq" },
	{ 0xf0b5498d, "regulator_set_current_limit" },
	{ 0xf858aaf8, "gpiod_set_value_cansleep" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x1fa8ea04, "regulator_enable" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cusb-nop-xceiv");
MODULE_ALIAS("of:N*T*Cusb-nop-xceivC*");

MODULE_INFO(srcversion, "B2F8D1F5892531D914EB60E");
