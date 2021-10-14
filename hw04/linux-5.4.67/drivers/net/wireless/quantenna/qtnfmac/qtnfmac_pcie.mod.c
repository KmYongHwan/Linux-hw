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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe156a92a, "init_dummy_netdev" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0x73633a3, "pcim_enable_device" },
	{ 0xddce8d3c, "napi_disable" },
	{ 0xe3611c52, "napi_schedule_prep" },
	{ 0x1e4d26af, "pcim_iomap_table" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0xc4142837, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x13eb986d, "qtnf_packet_send_hi_pri" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x4a1e79fd, "qtnf_update_tx_stats" },
	{ 0x8c46224, "pci_enable_wake" },
	{ 0x6d39509, "qtnf_get_debugfs_dir" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0x3f66d19f, "netif_napi_del" },
	{ 0xfd94814e, "complete_all" },
	{ 0x31fab83c, "qtnf_chipid_to_string" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x1709b155, "pcie_get_mps" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x4eaa68e5, "qtnf_trans_handle_rx_ctl_packet" },
	{ 0xfb578fc5, "memset" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0xfe64b80a, "netif_tx_stop_all_queues" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x7b092212, "netif_receive_skb" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x6ab9090f, "netif_napi_add" },
	{ 0x1d0b5393, "pci_enable_msi" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x9df75a65, "pcim_iomap_regions" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0x83ff0628, "napi_gro_receive" },
	{ 0x6ffd7a6c, "pcie_set_mps" },
	{ 0x12a38747, "usleep_range" },
	{ 0x6a641f96, "__napi_schedule" },
	{ 0x7ea19302, "put_device" },
	{ 0x59260404, "debugfs_create_devm_seqfile" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc3e0dc78, "pci_intx" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x618e1bcb, "qtnf_classify_skb" },
	{ 0x3f9d1335, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x288da038, "qtnf_core_detach" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x5d654257, "qtnf_wake_all_queues" },
	{ 0x963cf8c8, "get_device" },
	{ 0x84972054, "param_ops_byte" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x71deb539, "request_firmware" },
	{ 0xa0a435e0, "qtnf_update_rx_stats" },
	{ 0x7916b4c7, "qtnf_core_attach" },
	{ 0xb21aa7bc, "dmam_alloc_attrs" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xede283d, "release_firmware" },
	{ 0xa637b975, "dma_ops" },
	{ 0x896845d2, "pci_save_state" },
};

MODULE_INFO(depends, "qtnfmac");

MODULE_ALIAS("pci:v00001BB5d00000008sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "3331FB684DE9B2E6865741C");
