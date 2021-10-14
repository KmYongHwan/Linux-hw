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
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xc1c9587a, "pci_write_config_word" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd779c2f7, "pci_bus_read_config_byte" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0x1d39a3c5, "_dev_notice" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x2ee4e2e0, "set_primary_fwnode" },
	{ 0x258b7abb, "acpi_find_child_device" },
	{ 0xb7146edb, "i2c_add_adapter" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9caa394e, "is_acpi_device_node" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x3ada9e06, "acpi_check_region" },
	{ 0x85bd1608, "__request_region" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x12a38747, "usleep_range" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x37a0cba, "kfree" },
	{ 0x39932179, "i2c_del_adapter" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d00007113sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000719Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001055d00009463sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004353sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004363sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004372sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004385sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d0000780Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d0000790Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D94d0000790Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001166d00000200sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001166d00000201sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001166d00000203sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001166d00000205sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001166d00000408sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "1DE19B8293E50DD38D6F339");
