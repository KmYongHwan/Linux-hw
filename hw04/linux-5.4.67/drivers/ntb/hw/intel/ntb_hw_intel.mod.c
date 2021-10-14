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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x4cdc35fc, "ntb_unregister_device" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x87f5f48a, "pci_disable_msix" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0xee6c0980, "ntb_register_device" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0x3c457453, "ioread64_lo_hi" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x7d22f0d5, "simple_open" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x1d0b5393, "pci_enable_msi" },
	{ 0x90b8d10f, "pci_clear_master" },
	{ 0xafaf0e45, "pci_select_bars" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xc60854c8, "kmem_cache_alloc_node_trace" },
	{ 0xcc8afd53, "pci_enable_msix_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc3e0dc78, "pci_intx" },
	{ 0x848d372e, "iowrite8" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x716265c7, "debugfs_initialized" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x37a0cba, "kfree" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x527e1bd8, "pci_disable_msi" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xc5534d64, "ioread16" },
	{ 0xd21c5139, "iowrite64_lo_hi" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0xcfa0d077, "pci_iomap" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0xafd9421f, "ntb_db_event" },
	{ 0x91c43db3, "ntb_link_event" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x1f95edd, "param_ops_ullong" },
};

MODULE_INFO(depends, "ntb");

MODULE_ALIAS("pci:v00008086d00003725sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C0Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E0Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F0Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F0Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003726sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C0Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E0Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F0Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F0Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003727sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C0Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E0Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F0Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F0Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000201Csv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8B1C714F8182AE603F53976");
