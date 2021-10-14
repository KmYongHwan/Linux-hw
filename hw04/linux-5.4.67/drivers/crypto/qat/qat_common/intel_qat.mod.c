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
	{ 0xc5399abe, "cdev_del" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xd13be7fe, "pci_bus_type" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x40748904, "cdev_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0x53b954a2, "up_read" },
	{ 0xaf770f2c, "pci_enable_sriov" },
	{ 0x89ae7aa0, "rsa_parse_pub_key" },
	{ 0xc1c9587a, "pci_write_config_word" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0x59a11eaf, "crypto_alloc_shash" },
	{ 0xef4c6869, "crypto_register_akcipher" },
	{ 0x754d539c, "strlen" },
	{ 0x58c2e48b, "crypto_unregister_algs" },
	{ 0x79ff3bbe, "seq_open" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0xed6dd8e7, "crypto_ablkcipher_type" },
	{ 0x461d16ca, "sg_nents" },
	{ 0x9cb39373, "seq_puts" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x87f5f48a, "pci_disable_msix" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x5c8f0a1a, "pci_disable_sriov" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xc4142837, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x8aeb7a6b, "device_destroy" },
	{ 0x29d12d08, "crypto_register_kpp" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x87b8798d, "sg_next" },
	{ 0xee86bd09, "cpu_info" },
	{ 0x7665ee72, "crypto_dh_decode_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0xcec6343e, "seq_read" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xc21e426e, "pci_enable_pcie_error_reporting" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xd25eb83e, "crypto_shash_update" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xacde0476, "crypto_shash_digest" },
	{ 0x9166fada, "strncpy" },
	{ 0x5a921311, "strncmp" },
	{ 0xe2dc8d71, "pcie_flr" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0xc144b33e, "debugfs_remove" },
	{ 0x5792f848, "strlcpy" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xd75b20aa, "rsa_parse_priv_key" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xd05dce91, "pci_wait_for_pending_transaction" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x88e96942, "device_create" },
	{ 0x32fc605, "crypto_unregister_akcipher" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x1c12c32, "cpu_bit_bitmap" },
	{ 0xce807a25, "up_write" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0x1d0b5393, "pci_enable_msi" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x19d1aa1e, "cdev_add" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xf720a60b, "module_put" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xc60854c8, "kmem_cache_alloc_node_trace" },
	{ 0x531fdf70, "iommu_present" },
	{ 0xcc8afd53, "pci_enable_msix_range" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x2479193e, "crypto_authenc_extractkeys" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x8f673234, "crypto_destroy_tfm" },
	{ 0x300a230e, "crypto_unregister_aeads" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xff1e9dd8, "seq_list_start" },
	{ 0x9ad03563, "pci_disable_pcie_error_reporting" },
	{ 0x830d73d4, "seq_lseek" },
	{ 0x152de699, "seq_hex_dump" },
	{ 0x5ffc63db, "pci_sriov_get_totalvfs" },
	{ 0xcdf37f63, "crypto_register_aeads" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xd5a9e3bf, "crypto_register_algs" },
	{ 0x69acdf38, "memcpy" },
	{ 0x527e1bd8, "pci_disable_msi" },
	{ 0xc7bc4c0c, "pci_num_vf" },
	{ 0x8f1e938c, "class_destroy" },
	{ 0x71deb539, "request_firmware" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4167f609, "seq_release" },
	{ 0xad0eae7b, "crypto_unregister_kpp" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x59c6aff4, "irq_set_affinity_hint" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x66414bc7, "__class_create" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xede283d, "release_firmware" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xa637b975, "dma_ops" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x47a8c8a0, "try_module_get" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x896845d2, "pci_save_state" },
};

MODULE_INFO(depends, "authenc");


MODULE_INFO(srcversion, "4A6FA57FCC9167CDC131CB3");
