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
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x38a71b7e, "pci_free_resource_list" },
	{ 0x56470118, "__warn_printk" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0xcfa0d077, "pci_iomap" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xe01dfded, "sysfs_create_link" },
	{ 0x958e44df, "pci_bus_add_devices" },
	{ 0x75c31b7, "pcie_bus_configure_settings" },
	{ 0x6087403, "pci_assign_unassigned_bus_resources" },
	{ 0xce510be6, "pci_scan_child_bus" },
	{ 0xee0ed910, "add_dma_domain" },
	{ 0x227e3c17, "pci_create_root_bus" },
	{ 0x218e600b, "pci_add_resource_offset" },
	{ 0x27cdca93, "pci_add_resource" },
	{ 0x98733787, "pci_msi_create_irq_domain" },
	{ 0xf075cb29, "x86_vector_domain" },
	{ 0x4be933dc, "__irq_domain_alloc_fwnode" },
	{ 0x7469f71, "pci_find_next_bus" },
	{ 0x565c8b0a, "init_srcu_struct" },
	{ 0x9118b456, "pci_alloc_irq_vectors_affinity" },
	{ 0xe28e247d, "pci_msix_vec_count" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xfe94e94a, "pcim_iomap" },
	{ 0x73633a3, "pcim_enable_device" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x65915e46, "irq_domain_set_info" },
	{ 0x6cb6475b, "handle_untracked_irq" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xf0d853fe, "msi_desc_to_pci_dev" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xc829f7c0, "dma_mmap_attrs" },
	{ 0x69a34af1, "dma_get_sgtable_attrs" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0x3ecb7f7, "dma_direct_map_sg" },
	{ 0x7021fe18, "dma_direct_unmap_sg" },
	{ 0x68c544c7, "dma_direct_sync_single_for_cpu" },
	{ 0x135f9e2b, "dma_direct_sync_single_for_device" },
	{ 0x5386438a, "dma_direct_sync_sg_for_cpu" },
	{ 0xb5bc8db9, "dma_direct_sync_sg_for_device" },
	{ 0x3104b64d, "dma_supported" },
	{ 0x76da24f6, "dma_get_required_mask" },
	{ 0x37a0cba, "kfree" },
	{ 0xf3954f31, "synchronize_srcu" },
	{ 0x6d2e408f, "irq_get_irq_data" },
	{ 0xa637b975, "dma_ops" },
	{ 0x638bf849, "irq_domain_free_fwnode" },
	{ 0x96ee549f, "irq_domain_remove" },
	{ 0xaeb552a0, "del_dma_domain" },
	{ 0xf47e020f, "cleanup_srcu_struct" },
	{ 0xfc39f35e, "pci_remove_root_bus" },
	{ 0xb2c1438e, "pci_stop_root_bus" },
	{ 0xe193ad0d, "sysfs_remove_link" },
	{ 0x896845d2, "pci_save_state" },
	{ 0x8cba6c0b, "devm_free_irq" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xc78cbbeb, "pci_irq_vector" },
	{ 0x72dbaa7, "__srcu_read_unlock" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0x33dd9940, "__srcu_read_lock" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d0000201Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000028C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009A0Bsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "29576FB15DC9F8343DE6F7F");
