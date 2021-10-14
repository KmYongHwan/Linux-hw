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
	{ 0xfff30144, "extcon_get_state" },
	{ 0x3a0b85fb, "power_supply_get_drvdata" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x55784228, "regmap_irq_get_virq" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0xb0472fad, "devm_extcon_register_notifier" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x4f9a9658, "devm_extcon_register_notifier_all" },
	{ 0x3abeb957, "devm_add_action" },
	{ 0xcebeeb50, "devm_power_supply_register" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0xb4577003, "acpi_dev_present" },
	{ 0xff0cadec, "extcon_get_extcon_dev" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x6f280d75, "power_supply_changed" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("platform:axp288_charger");

MODULE_INFO(srcversion, "41573793E18DEB1978D8338");
