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
	{ 0x442639ef, "param_ops_uint" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0xa637b975, "dma_ops" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x527e1bd8, "pci_disable_msi" },
	{ 0xb7146edb, "i2c_add_adapter" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x1d0b5393, "pci_enable_msi" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb21aa7bc, "dmam_alloc_attrs" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xfe94e94a, "pcim_iomap" },
	{ 0x80fb2c60, "pci_request_region" },
	{ 0xeab6f4c4, "acpi_check_resource_conflict" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x73633a3, "pcim_enable_device" },
	{ 0x2ee4e2e0, "set_primary_fwnode" },
	{ 0x9caa394e, "is_acpi_device_node" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x29361773, "complete" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x39932179, "i2c_del_adapter" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d00000C59sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000C5Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000018ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000019ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001F15sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "433297248DDDCC08D9F1203");
