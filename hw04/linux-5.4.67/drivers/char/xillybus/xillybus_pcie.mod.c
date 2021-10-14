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
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x3abeb957, "devm_add_action" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x16bfedb3, "xillybus_endpoint_discovery" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x25978d50, "xillybus_isr" },
	{ 0x1d0b5393, "pci_enable_msi" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x1e4d26af, "pcim_iomap_table" },
	{ 0x9df75a65, "pcim_iomap_regions" },
	{ 0xc38973ed, "pci_disable_link_state" },
	{ 0x73633a3, "pcim_enable_device" },
	{ 0x38803130, "xillybus_init_endpoint" },
	{ 0x68c544c7, "dma_direct_sync_single_for_cpu" },
	{ 0x135f9e2b, "dma_direct_sync_single_for_device" },
	{ 0xa637b975, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xde6d05b8, "xillybus_endpoint_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "xillybus_core");

MODULE_ALIAS("pci:v000010EEd0000EBEBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001172d0000EBEBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011AAd0000EBEBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001204d0000EBEBsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "6A67F57B7FAB0584DBAA527");
