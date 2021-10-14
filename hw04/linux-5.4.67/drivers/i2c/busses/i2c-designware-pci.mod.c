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
	{ 0x2877d775, "pci_free_irq_vectors" },
	{ 0x73633a3, "pcim_enable_device" },
	{ 0x8b2a2527, "i2c_dw_probe" },
	{ 0xa625ec51, "__pm_runtime_use_autosuspend" },
	{ 0x2ee4e2e0, "set_primary_fwnode" },
	{ 0xc76aa310, "__pm_runtime_suspend" },
	{ 0x1e4d26af, "pcim_iomap_table" },
	{ 0xaa768b46, "pm_runtime_allow" },
	{ 0x8e12dcca, "pm_runtime_forbid" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x9118b456, "pci_alloc_irq_vectors_affinity" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x9df75a65, "pcim_iomap_regions" },
	{ 0x39932179, "i2c_del_adapter" },
	{ 0x8cba6c0b, "devm_free_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0xc78cbbeb, "pci_irq_vector" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x89c33339, "pm_runtime_set_autosuspend_delay" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x9caa394e, "is_acpi_device_node" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d00000817sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000818sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000819sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000082Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000082Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000082Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001195sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001196sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F41sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F42sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F43sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F44sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F45sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F46sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F47sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C61sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C62sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022C1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022C2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022C3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022C5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022C6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022C7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BB9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BBAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BBBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BBCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BBDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BBEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BBFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BC0sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "6F02A73AD660C8B1A379DE9");
