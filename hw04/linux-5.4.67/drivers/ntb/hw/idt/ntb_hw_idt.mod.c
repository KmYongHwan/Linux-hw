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
	{ 0x7d22f0d5, "simple_open" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0x716265c7, "debugfs_initialized" },
	{ 0xc5850110, "printk" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xee6c0980, "ntb_register_device" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x9118b456, "pci_alloc_irq_vectors_affinity" },
	{ 0xd8a8ad6d, "devm_hwmon_device_register_with_groups" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x1e4d26af, "pcim_iomap_table" },
	{ 0xa88406a3, "pcim_iomap_regions_request_all" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x73633a3, "pcim_enable_device" },
	{ 0x3f6b3036, "pci_cleanup_aer_uncorrect_error_status" },
	{ 0xc21e426e, "pci_enable_pcie_error_reporting" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x4cdc35fc, "ntb_unregister_device" },
	{ 0xc144b33e, "debugfs_remove" },
	{ 0x9ad03563, "pci_disable_pcie_error_reporting" },
	{ 0x90b8d10f, "pci_clear_master" },
	{ 0x37a0cba, "kfree" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x96848186, "scnprintf" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x95e38aa1, "pcibios_resource_to_bus" },
	{ 0x47eba51a, "ntb_msg_event" },
	{ 0xafd9421f, "ntb_db_event" },
	{ 0x91c43db3, "ntb_link_event" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x2877d775, "pci_free_irq_vectors" },
	{ 0x8cba6c0b, "devm_free_irq" },
	{ 0xc78cbbeb, "pci_irq_vector" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xe484e35f, "ioread32" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ntb");

MODULE_ALIAS("pci:v0000111Dd00008091sv*sd*bc06sc80i*");
MODULE_ALIAS("pci:v0000111Dd0000808Fsv*sd*bc06sc80i*");
MODULE_ALIAS("pci:v0000111Dd00008088sv*sd*bc06sc80i*");
MODULE_ALIAS("pci:v0000111Dd00008092sv*sd*bc06sc80i*");
MODULE_ALIAS("pci:v0000111Dd00008090sv*sd*bc06sc80i*");
MODULE_ALIAS("pci:v0000111Dd0000808Esv*sd*bc06sc80i*");
MODULE_ALIAS("pci:v0000111Dd0000808Csv*sd*bc06sc80i*");
MODULE_ALIAS("pci:v0000111Dd0000808Asv*sd*bc06sc80i*");

MODULE_INFO(srcversion, "E85DC9AF68EAB9ADCEFD735");
