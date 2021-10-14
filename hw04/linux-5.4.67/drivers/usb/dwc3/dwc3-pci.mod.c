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
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x7d59dd46, "pm_wq" },
	{ 0x37a0cba, "kfree" },
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xb89b6e6b, "guid_parse" },
	{ 0x12a38747, "usleep_range" },
	{ 0x9a28da47, "gpiod_put" },
	{ 0xf858aaf8, "gpiod_set_value_cansleep" },
	{ 0xf2b4ea27, "gpiod_get_optional" },
	{ 0x5e0b3f66, "gpiod_add_lookup_table" },
	{ 0x50b9de98, "devm_acpi_dev_add_driver_gpios" },
	{ 0x7208bf2, "pcim_iounmap" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfe94e94a, "pcim_iomap" },
	{ 0xf5ee1308, "platform_device_put" },
	{ 0x931d3975, "__pm_runtime_idle" },
	{ 0xf39aaf26, "platform_device_add" },
	{ 0xc63f0727, "platform_device_add_properties" },
	{ 0x2ee4e2e0, "set_primary_fwnode" },
	{ 0x9caa394e, "is_acpi_device_node" },
	{ 0x40b69005, "platform_device_add_resources" },
	{ 0x4530cfec, "platform_device_alloc" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x73633a3, "pcim_enable_device" },
	{ 0xc76aa310, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xc219f6a1, "gpiod_remove_lookup_table" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0x15fc91fe, "device_init_wakeup" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d000022B7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F37sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000119Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002EEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000006EEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A130sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AAAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AAAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AAAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DEEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A36Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A3B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034EEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B7Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0EEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000043EEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004DEEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00007912sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "637EFAFCC0D6C5FA47DA970");
