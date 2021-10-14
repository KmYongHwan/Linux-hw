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
	{ 0x5771e9ba, "bus_unregister_notifier" },
	{ 0xd7645c18, "i2c_for_each_dev" },
	{ 0x438e6a40, "bus_register_notifier" },
	{ 0xf006a2ef, "i2c_bus_type" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb4577003, "acpi_dev_present" },
	{ 0x7caf306c, "property_entries_dup" },
	{ 0xc5850110, "printk" },
	{ 0x6add5c9a, "dmi_find_device" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0x37a0cba, "kfree" },
	{ 0x2a4cf402, "property_entries_free" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x7d2d038c, "device_attach" },
	{ 0xa6ae0ad7, "i2c_client_type" },
	{ 0xb4ec4b77, "i2c_adapter_type" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xa32b6a46, "device_add_properties" },
	{ 0xd52c37ad, "acpi_match_device" },
	{ 0x9caa394e, "is_acpi_device_node" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa258faf8, "i2c_new_device" },
	{ 0x16779475, "i2c_unregister_device" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x57d0a985, "i2c_new_probed_device" },
	{ 0xd13be7fe, "pci_bus_type" },
	{ 0x5a921311, "strncmp" },
	{ 0x754d539c, "strlen" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("dmi*:svn*SAMSUNG*:pn*Lumpy*:");
MODULE_ALIAS("dmi*:pn*Alex*:");
MODULE_ALIAS("dmi*:svn*GOOGLE*:pn*Link*:");
MODULE_ALIAS("dmi*:bvn*coreboot*:pn*Wolf*:");
MODULE_ALIAS("dmi*:bvn*coreboot*:pn*Falco*:");
MODULE_ALIAS("dmi*:bvn*coreboot*:pn*Leon*:");
MODULE_ALIAS("dmi*:pn*Parrot*:");
MODULE_ALIAS("dmi*:pn*ZGB*:");
MODULE_ALIAS("dmi*:pn*Peppy*:");
MODULE_ALIAS("dmi*:pn*Butterfly*:");
MODULE_ALIAS("dmi*:pn*Mario*:");
MODULE_ALIAS("dmi*:svn*Google*:pn*Caroline*:");
MODULE_ALIAS("dmi*:svn*GOOGLE*:pn*Samus*:");
MODULE_ALIAS("dmi*:svn*GOOGLE*:pn*Celes*:");
MODULE_ALIAS("dmi*:svn*GOOGLE*:");

MODULE_INFO(srcversion, "AEF93148C0BEF15F9841B14");
