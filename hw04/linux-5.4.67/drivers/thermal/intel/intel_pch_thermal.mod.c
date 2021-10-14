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
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xe0cf7d08, "thermal_zone_device_register" },
	{ 0x4d87e644, "pci_ioremap_bar" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x9caa394e, "is_acpi_device_node" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x1c7ec4a3, "pci_release_region" },
	{ 0xedc03953, "iounmap" },
	{ 0xd8d49ad4, "thermal_zone_device_unregister" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d00009C24sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C24sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009CA4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D31sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A131sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DF9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A379sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F451694B844D4971B82289B");
