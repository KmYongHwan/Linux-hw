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
	{ 0xa484951d, "device_connection_remove" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xb9060f32, "device_connection_add" },
	{ 0x8303ac5, "x86_match_cpu" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x15fc91fe, "device_init_wakeup" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x4f9a9658, "devm_extcon_register_notifier_all" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x55784228, "regmap_irq_get_virq" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0x4dd92e55, "devm_extcon_dev_register" },
	{ 0x22f00398, "devm_extcon_dev_allocate" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x7ea19302, "put_device" },
	{ 0xff0cadec, "extcon_get_extcon_dev" },
	{ 0x605e6974, "acpi_dev_get_first_match_dev" },
	{ 0x3abeb957, "devm_add_action" },
	{ 0xe6b8e754, "usb_role_switch_get" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x11757273, "extcon_set_state_sync" },
	{ 0xff42c374, "usb_role_switch_get_role" },
	{ 0xd5474690, "usb_role_switch_set_role" },
	{ 0xfff30144, "extcon_get_state" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb2c20827, "regmap_read" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xc9fd634a, "usb_role_switch_put" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("platform:axp288_extcon");

MODULE_INFO(srcversion, "07B1C2D26E7F92D458E2C65");
